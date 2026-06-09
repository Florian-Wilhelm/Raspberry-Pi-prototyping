/**
 * 
 * "Production level SW 1.0x" as of March 1, 2026
 * (c) Florian W. Dirnberger
 * 
 * MLX90642 IR array serves as main sensor
 * TSL25911 ambient light sensor is an additional component (error correction if applicable)
 * 
 * OLED for outputting basic data, further data output on the serial port
 *   
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "pico/time.h"
#include "pico/binary_info.h"

#include "pico/cyw43_arch.h"
#include "lwip/apps/httpd.h"
#include "setup.h"

#include "connections.h"

// OLED SSD1306 w/ SSD1306 controller
#include "oled.h"
#include "lookupTable.h"

void initUART()
{
  uart_init(UART_ID, 115200);
  gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
  gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);
  uart_set_format(UART_ID, 8, 1, UART_PARITY_NONE);
  // shell command: Pi 3 "minicom -b 115200 -D /dev/serial0", Pi 5 "(...) /dev/ttyAMA0"
  
  char SW_Version[32];
  sprintf(SW_Version, "*SW-V: V1.03 \r\n");  // to be synchronized with lookupTable.h
  uart_write_blocking(UART_ID, SW_Version, strlen(SW_Version));
}  

void initI2C()
{  
  i2c_init(I2C_ID, 400 * 1000); // as to the MLX90642, up to 1MHz would be possible; for refresh rate 8Hz we need at least 400kHz   
  gpio_set_function(SDA_PIN, GPIO_FUNC_I2C);
  gpio_set_function(SCL_PIN, GPIO_FUNC_I2C);
  
  // using external 3.9 or 4.7 kOhm resistors, internal actually not needed
  //gpio_pull_up(SDA_PIN);
  //gpio_pull_up(SCL_PIN);   
}

/*
void renderImage(uint digit, uint a, uint b, uint c , uint d)
{
    struct render_area frame_area = {a, b, c, d};
    calc_render_area_buflen(&frame_area);
    
    if (digit == 0)
        render(bright, &frame_area);
    else if (digit == 1)
        render(clr, &frame_area);
    else if (digit == 2)
        render(sober, &frame_area);
}
*/

void clear_startScreen()
{    
    // clearing display start screen after a few seconds
    
    int m = 8;
    
    for (int i=0; i < 15; i++)
    {
      struct render_area delete_area_1 = {0 + (m*i), 7 + (m*i), 0, 0};      
      calc_render_area_buflen(&delete_area_1);    
      render(clr, &delete_area_1);
      
      struct render_area delete_area_2 = {0 + (m*i), 7 + (m*i), 1, 1};
      calc_render_area_buflen(&delete_area_2);    
      render(clr, &delete_area_2);
      
      struct render_area delete_area_3 = {0 + (m*i), 7 + (m*i), 3, 3};
      calc_render_area_buflen(&delete_area_3);    
      render(clr, &delete_area_3);
    }    
}

// could be done with fewer arrays but who cares
short TemperatureRawRow1[32]; 
short TemperatureRawRow2[32]; 
short TemperatureRawRow3[32]; 
short TemperatureRawRow4[32];
short TemperatureRawRow5[32]; 
short TemperatureRawRow6[32];
short TemperatureRawRow7[32]; 
short TemperatureRawRow8[32];
short TemperatureRawRow9[32]; 
short TemperatureRawRow10[32]; 
short TemperatureRawRow11[32]; 
short TemperatureRawRow12[32];
short TemperatureRawRow13[32]; 
short TemperatureRawRow14[32];
short TemperatureRawRow15[32]; 
short TemperatureRawRow16[32];
short TemperatureRawRow17[32]; 
short TemperatureRawRow18[32]; 
short TemperatureRawRow19[32]; 
short TemperatureRawRow20[32];
short TemperatureRawRow21[32]; 
short TemperatureRawRow22[32];
short TemperatureRawRow23[32]; 
short TemperatureRawRow24[32];

short TemperatureRawSensor;

float TemperatureRow1[32]; 
float TemperatureRow2[32]; 
float TemperatureRow3[32]; 
float TemperatureRow4[32]; 
float TemperatureRow5[32]; 
float TemperatureRow6[32];
float TemperatureRow7[32]; 
float TemperatureRow8[32];
float TemperatureRow9[32]; 
float TemperatureRow10[32]; 
float TemperatureRow11[32]; 
float TemperatureRow12[32]; 
float TemperatureRow13[32]; 
float TemperatureRow14[32];
float TemperatureRow15[32]; 
float TemperatureRow16[32];
float TemperatureRow17[32]; 
float TemperatureRow18[32]; 
float TemperatureRow19[32]; 
float TemperatureRow20[32]; 
float TemperatureRow21[32]; 
float TemperatureRow22[32];
float TemperatureRow23[32]; 
float TemperatureRow24[32]; 

float TemperatureSensor;

#include "ssi.h"

int main() 
{  
    stdio_init_all();
    initUART();
    initI2C();  
    
    // graphic scaffold, start screen
    oled_init();
    struct render_area title_area = {0, 127, 0, 4};
    calc_render_area_buflen(&title_area);
    render(startScreen, &title_area);
    
    sleep_ms(500);   
    
    connect();
    http_set_ssi_handler(mySSIHandler, ssitags, 769);
    httpd_init();
    
    sleep_ms(1000);
              
    clear_startScreen();
    
    // disable LED to make the device more inconspiciuous
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
            
    char readValue[32];
    
     /*
    Initialize the MLX90642 sensor
    */ 
    
    // handle with care, changes will be stored permanently in the EEPROM
    
    // changing emissivity via dip-switch (just for experimenting)
    // there may be some writing attempts necessary before it'll be written successfully (no implementation to check it directly)
    uint32_t mask = (1 << DIP_SWITCH_PIN1 | 1 << DIP_SWITCH_PIN2);
    
    gpio_init_mask(mask);
    gpio_set_dir_masked(mask, GPIO_IN);
    gpio_pull_up(DIP_SWITCH_PIN1);
    gpio_pull_up(DIP_SWITCH_PIN2);
    
    if (!gpio_get(DIP_SWITCH_PIN1)){
      uint8_t set_emissivity[6] = {0x3A, 0x2E, 0x11, 0xF2, 0xFF, 0xFF}; // will generate extreme temperature values, only for testing purposes   
      i2c_write_blocking(I2C_ID, 0x66, set_emissivity, 6, false); 
      sleep_ms(1); 
    }    
    else if (!gpio_get(DIP_SWITCH_PIN2)){
      uint8_t set_emissivity[6] = {0x3A, 0x2E, 0x11, 0xF2, 0x3C, 0xC3}; // emissivity about 0.95  
      i2c_write_blocking(I2C_ID, 0x66, set_emissivity, 6, false); 
      sleep_ms(1);  
    }        
    else {
	  uint8_t set_emissivity[6] = {0x3A, 0x2E, 0x11, 0xF2, 0x40, 0x00}; // default, emissivity = 1
      i2c_write_blocking(I2C_ID, 0x66, set_emissivity, 6, false); 
      sleep_ms(1); 
    }
    
    /*
    // refresh rate
    //uint8_t set_refresh_rate[6] = {0x3A, 0x2E, 0x11, 0xF0, 0x00, 0x03}; // 4Hz
    uint8_t set_refresh_rate[6] = {0x3A, 0x2E, 0x11, 0xF0, 0x00, 0x04}; // default, 8Hz
    //uint8_t set_refresh_rate[6] = {0x3A, 0x2E, 0x11, 0xF0, 0x00, 0x05}; // 16Hz
    
    i2c_write_blocking(I2C_ID, 0x66, set_refresh_rate, 6, false); 
    sleep_ms(1);
    */
    
    /*
    // background temperature
    uint8_t set_backgroundTemperature[6] = {0x3A, 0x2E, 0xEE, 0xEE, 0x80, 0x00}; 
    i2c_write_blocking(I2C_ID, 0x66, set_backgroundTemperature, 6, false); 
    sleep_ms(1);
    */
     
    // reading Firmware (FW) versions
    uint8_t FW_major[4] = {0xFF, 0xF8};
    uint8_t FW_minor[4] = {0xFF, 0xFA};
    
    i2c_write_blocking(I2C_ID, 0x66, FW_major, 2, true);      
    i2c_read_blocking(I2C_ID, 0x66, FW_major, 2, false);
    
    i2c_write_blocking(I2C_ID, 0x66, FW_minor, 2, true);      
    i2c_read_blocking(I2C_ID, 0x66, FW_minor, 2, false);    
        
    sprintf(readValue, "MLX90642 FW-V: %d.%d.%d\r\n", FW_major[0], FW_minor[1], FW_minor[0]); 
    uart_write_blocking(UART_ID, readValue, strlen(readValue));      
           
    /*
    Initialize the TSL25911 sensor
    */
    
    // see data sheet, it is a bit tricky with the registers  
    
    uint8_t TSL25911_init_0[] = {0xA0};  // COMMAND register, normal operation, adressing ENABLE register   
    i2c_write_blocking(I2C_ID, 0x29, TSL25911_init_0, 1, true);  
    i2c_read_blocking(I2C_ID, 0x29, TSL25911_init_0, 1, false);
  
    uint8_t TSL25911_init_1[] = {0x03}; // ENABLE register, PON and AEN 
    i2c_write_blocking(I2C_ID, 0x29, TSL25911_init_1, 1, true);
    i2c_read_blocking(I2C_ID, 0x29, TSL25911_init_1, 1, false); 
    
    uint8_t TSL25911_init_2[] = {0xA1};  // COMMAND register, normal operation, adressing CONFIG/CONTROL register 
    i2c_write_blocking(I2C_ID, 0x29, TSL25911_init_2, 1, true);
    i2c_read_blocking(I2C_ID, 0x29, TSL25911_init_2, 1, false);  
    
    uint8_t TSL25911_init_3[] = {0x14};  //  CONFIG/CONTROL register, modifying maximum gain mode and integration time
    i2c_write_blocking(I2C_ID, 0x29, TSL25911_init_3, 1, true);  
    i2c_read_blocking(I2C_ID, 0x29, TSL25911_init_3, 1, false); 
    
    // this code sequence makes sense in a certain context, but potentially blocks the whole device
    /*
    while (i2c_read_blocking(I2C_ID, 0x29, TSL25911_init_1, 1, false) < 0)  // repeats until the slave device sends ACK
    {
      sleep_ms(1);
    }       
    */
    
      // test I2C commands for TSL25911
     
      uint8_t TSL25911_LB_CH0[] = {0xB4};    
    
      i2c_write_blocking(I2C_ID, 0x29, TSL25911_LB_CH0, 1, true); // "true" means final stop bit is not sent, data transfer can continue as part of the same transaction   
      i2c_read_blocking(I2C_ID, 0x29, TSL25911_LB_CH0, 1, false);
      
      uint8_t TSL25911_HB_CH0[] = {0xB5};
    
      i2c_write_blocking(I2C_ID, 0x29, TSL25911_HB_CH0, 1, true);    
      i2c_read_blocking(I2C_ID, 0x29, TSL25911_HB_CH0, 1, false);   
            
      uint8_t TSL25911_LB_CH1[] = {0xB6};    
    
      i2c_write_blocking(I2C_ID, 0x29, TSL25911_LB_CH1, 1, true);    
      i2c_read_blocking(I2C_ID, 0x29, TSL25911_LB_CH1, 1, false);
      
      uint8_t TSL25911_HB_CH1[] = {0xB7};
    
      i2c_write_blocking(I2C_ID, 0x29, TSL25911_HB_CH1, 1, true);    
      i2c_read_blocking(I2C_ID, 0x29, TSL25911_HB_CH1, 1, false);   
    
      sprintf(readValue, "TSL25911 CH0: %d %d \r\n", TSL25911_HB_CH0[0], TSL25911_LB_CH0[0]);  // values from 0 to 255
      uart_write_blocking(UART_ID, readValue, strlen(readValue));   
      sprintf(readValue, "TSL25911 CH1: %d %d \r\n", TSL25911_HB_CH1[0], TSL25911_LB_CH1[0]);  // values from 0 to 255
      uart_write_blocking(UART_ID, readValue, strlen(readValue)); 
   
      
      // test I2C commands for MLX90642 
       
      // *the array consists of 768 IR sensors
      // *each IR sensor delivers 2 Byte of data
      // *image data starts at address 0x342C (Pixel [1:1]), and ends at address 3A2A (Pixel [24:32])
      // *raw data starts at address 0x2E2A (Pixel [1:1]), and ends at address 3A2A (Pixel [24:32])      
      
      //uint16_t ImageDataStartAddress = 0x342C;
      //uint16_t ImageDataEndAddress = 0x3A2A;
      //uint16_t RawDataStartAddress = 0x2E2A;
      //uint16_t RawDataEndAddress = 0x312A;    
      
      uint16_t upperPixelAddress;
      uint16_t lowerPixelAddress;
      
      uint16_t pixelAddress; // always the first pixel in that row
      
      sleep_ms(1);
    
      while(true){   
           
           // sensor temperature (not to be confused with environment temperature)
            pixelAddress = 0x3A2C; 
      
            upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
            lowerPixelAddress = pixelAddress & 0x00FF;
                 
            uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
            i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
            i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false);
           
            TemperatureRawSensor = (pixelValue[0] << 8) + pixelValue[1];
           
           // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawSensor < 0)     
                 TemperatureSensor = (-1)*((~TemperatureRawSensor)+1) / 100.0;
             else 
                 TemperatureSensor = TemperatureRawSensor / 100.0;
                 
           // ***
           // the following data acquisition routine could be done much shorter with nested loops but who cares, it is very readable this way
           // ***
                
           for (int i=0x01; i <= 0x20; i++) 
           
           { 
             
             if (i == 1)
               pixelAddress = 0x342C; 
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
           
             TemperatureRawRow1[i-1] = (pixelValue[0] << 8) + pixelValue[1]; 
             
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow1[i-1] < 0)     
                 TemperatureRow1[i-1] = (-1)*((~TemperatureRawRow1[i-1])+1) / 50.0;
             else 
                 TemperatureRow1[i-1] = TemperatureRawRow1[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }
           
           for (int i=0x01; i <= 0x20; i++) 
           
           { 
             
             if (i == 1)
               pixelAddress = 0x346C; 
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow2[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow2[i-1] < 0)     
                 TemperatureRow2[i-1] = (-1)*((~TemperatureRawRow2[i-1])+1) / 50.0;
             else 
                 TemperatureRow2[i-1] = TemperatureRawRow2[i-1] / 50.0;
                             
             //sleep_ms(1);
                             
             pixelAddress = pixelAddress + 0x02;
           
           }
           
           for (int i=0x01; i <= 0x20; i++) 
           
           { 
             
             if (i == 1)
               pixelAddress = 0x34AC; 
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow3[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow3[i-1] < 0)     
                 TemperatureRow3[i-1] = (-1)*((~TemperatureRawRow3[i-1])+1) / 50.0;
             else 
                 TemperatureRow3[i-1] = TemperatureRawRow3[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x34EC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow4[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow4[i-1] < 0)     
                 TemperatureRow4[i-1] = (-1)*((~TemperatureRawRow4[i-1])+1) / 50.0;
             else 
                 TemperatureRow4[i-1] = TemperatureRawRow4[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }     
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x352C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow5[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow5[i-1] < 0)     
                 TemperatureRow5[i-1] = (-1)*((~TemperatureRawRow5[i-1])+1) / 50.0;
             else 
                 TemperatureRow5[i-1] = TemperatureRawRow5[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }       
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x356C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow6[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow6[i-1] < 0)     
                 TemperatureRow6[i-1] = (-1)*((~TemperatureRawRow6[i-1])+1) / 50.0;
             else 
                 TemperatureRow6[i-1] = TemperatureRawRow6[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           } 
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x35AC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow7[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow7[i-1] < 0)     
                 TemperatureRow7[i-1] = (-1)*((~TemperatureRawRow7[i-1])+1) / 50.0;
             else 
                 TemperatureRow7[i-1] = TemperatureRawRow7[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           } 
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x35EC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow8[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow8[i-1] < 0)     
                 TemperatureRow8[i-1] = (-1)*((~TemperatureRawRow8[i-1])+1) / 50.0;
             else 
                 TemperatureRow8[i-1] = TemperatureRawRow8[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }     
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x362C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow9[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow9[i-1] < 0)     
                 TemperatureRow9[i-1] = (-1)*((~TemperatureRawRow9[i-1])+1) / 50.0;
             else 
                 TemperatureRow9[i-1] = TemperatureRawRow9[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }       
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x366C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow10[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow10[i-1] < 0)     
                 TemperatureRow10[i-1] = (-1)*((~TemperatureRawRow10[i-1])+1) / 50.0;
             else 
                 TemperatureRow10[i-1] = TemperatureRawRow10[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }   
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x36AC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow11[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow11[i-1] < 0)     
                 TemperatureRow11[i-1] = (-1)*((~TemperatureRawRow11[i-1])+1) / 50.0;
             else 
                 TemperatureRow11[i-1] = TemperatureRawRow11[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }        
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x36EC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow12[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow12[i-1] < 0)     
                 TemperatureRow12[i-1] = (-1)*((~TemperatureRawRow12[i-1])+1) / 50.0;
             else 
                 TemperatureRow12[i-1] = TemperatureRawRow12[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }     
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x372C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow13[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow13[i-1] < 0)     
                 TemperatureRow13[i-1] = (-1)*((~TemperatureRawRow13[i-1])+1) / 50.0;
             else 
                 TemperatureRow13[i-1] = TemperatureRawRow13[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }    
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x376C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow14[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow14[i-1] < 0)     
                 TemperatureRow14[i-1] = (-1)*((~TemperatureRawRow14[i-1])+1) / 50.0;
             else 
                 TemperatureRow14[i-1] = TemperatureRawRow14[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }    
           
            for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x37AC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow15[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow15[i-1] < 0)     
                 TemperatureRow15[i-1] = (-1)*((~TemperatureRawRow15[i-1])+1) / 50.0;
             else 
                 TemperatureRow15[i-1] = TemperatureRawRow15[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }   
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x37EC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow16[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow16[i-1] < 0)     
                 TemperatureRow16[i-1] = (-1)*((~TemperatureRawRow16[i-1])+1) / 50.0;
             else 
                 TemperatureRow16[i-1] = TemperatureRawRow16[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }        
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x382C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow17[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow17[i-1] < 0)     
                 TemperatureRow17[i-1] = (-1)*((~TemperatureRawRow17[i-1])+1) / 50.0;
             else 
                 TemperatureRow17[i-1] = TemperatureRawRow17[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }  
           
            for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x386C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow18[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow18[i-1] < 0)     
                 TemperatureRow18[i-1] = (-1)*((~TemperatureRawRow18[i-1])+1) / 50.0;
             else 
                 TemperatureRow18[i-1] = TemperatureRawRow18[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }      
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x38AC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow19[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow19[i-1] < 0)     
                 TemperatureRow19[i-1] = (-1)*((~TemperatureRawRow19[i-1])+1) / 50.0;
             else 
                 TemperatureRow19[i-1] = TemperatureRawRow19[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }        
           
            for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x38EC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow20[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow20[i-1] < 0)     
                 TemperatureRow20[i-1] = (-1)*((~TemperatureRawRow20[i-1])+1) / 50.0;
             else 
                 TemperatureRow20[i-1] = TemperatureRawRow20[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }           
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x392C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow21[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow21[i-1] < 0)     
                 TemperatureRow21[i-1] = (-1)*((~TemperatureRawRow21[i-1])+1) / 50.0;
             else 
                 TemperatureRow21[i-1] = TemperatureRawRow21[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }   
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x396C;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow22[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow22[i-1] < 0)     
                 TemperatureRow22[i-1] = (-1)*((~TemperatureRawRow22[i-1])+1) / 50.0;
             else 
                 TemperatureRow22[i-1] = TemperatureRawRow22[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }      
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x39AC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow23[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow23[i-1] < 0)     
                 TemperatureRow23[i-1] = (-1)*((~TemperatureRawRow23[i-1])+1) / 50.0;
             else 
                 TemperatureRow23[i-1] = TemperatureRawRow23[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }      
           
           for (int i=0x01; i <= 0x20; i++)  
           
           { 
             
             if (i == 1)
               pixelAddress = 0x39EC;
      
             upperPixelAddress = (pixelAddress & 0xFF00) >> 8;
             lowerPixelAddress = pixelAddress & 0x00FF;
                 
             uint8_t pixelValue[4] = {upperPixelAddress, lowerPixelAddress};
    
             i2c_write_blocking(I2C_ID, 0x66, pixelValue, 2, true);      
             i2c_read_blocking(I2C_ID, 0x66, pixelValue, 2, false); 
             
             TemperatureRawRow24[i-1] = (pixelValue[0] << 8) + pixelValue[1];
           
             // data is stored in two's complement format what has to be taken into account
             if (TemperatureRawRow24[i-1] < 0)     
                 TemperatureRow24[i-1] = (-1)*((~TemperatureRawRow24[i-1])+1) / 50.0;
             else 
                 TemperatureRow24[i-1] = TemperatureRawRow24[i-1] / 50.0;
                             
             //sleep_ms(1);
               
             pixelAddress = pixelAddress + 0x02;
           
           }                
         
   }
          
    return 0;       
}
