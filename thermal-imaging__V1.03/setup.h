int setup(uint32_t country, const char *ssid, const char *pass,
          uint32_t auth, const char *hostname, ip_addr_t *ip,
          ip_addr_t *mask, ip_addr_t *gw)
{

    if (cyw43_arch_init_with_country(country))
    {
        return 1;
    }

    cyw43_arch_enable_sta_mode();
    if (hostname != NULL)
    {
        netif_set_hostname(netif_default, hostname);
    }
    if (cyw43_arch_wifi_connect_async(ssid, pass, auth))
    {
        return 2;
    }
    int flashrate = 1000;
    int status = CYW43_LINK_UP + 1;
    while (status >= 0 && status != CYW43_LINK_UP)
    {
        int new_status = cyw43_tcpip_link_status(&cyw43_state,
                                                 CYW43_ITF_STA);
        if (new_status != status)
        {
            status = new_status;
            flashrate = flashrate / (status + 1);
            printf("connect status: %d %d\n", status, flashrate);
        }
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(flashrate);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(flashrate);
    }
    if (status < 0)
    {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
    }
    else
    {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        if (ip != NULL)
        {
            netif_set_ipaddr(netif_default, ip);
        }
        if (mask != NULL)
        {
            netif_set_netmask(netif_default, mask);
        }
        if (gw != NULL)
        {
            netif_set_gw(netif_default, gw);
        }
        
        int32_t rssi;
        cyw43_wifi_get_rssi(&cyw43_state, &rssi);        

        printf("IP: %s\n",
               ip4addr_ntoa(netif_ip_addr4(netif_default)));
        printf("Mask: %s\n",
               ip4addr_ntoa(netif_ip_netmask4(netif_default)));
        printf("Gateway: %s\n",
               ip4addr_ntoa(netif_ip_gw4(netif_default)));
        printf("Host Name: %s\n",
               netif_get_hostname(netif_default));
        
        printf("rssi: %d dBm \n", rssi);
    }
    return status;
}

int connect()
{
   
   // declare binary information
    // official RasPi examples use 0x1111 for the first parameter, and 0x3333 for the second; but other parameters ought to work as well
    bi_decl(bi_ptr_string (0x1111, 0x3333, SSID, "WLAN-V4QFMV", 64));
    bi_decl(bi_ptr_string (0x1111, 0x3333, PASS, "51023705", 64));
   
    char ssid[24];
    char pass[24];
   
    sprintf(ssid, "%s", SSID);
    sprintf(pass, "%s", PASS);
    
   uint32_t country = CYW43_COUNTRY_GERMANY;
   uint32_t auth = CYW43_AUTH_WPA2_MIXED_PSK;
   return setup(country, ssid, pass, auth, "Pico W", NULL, NULL, NULL);
}

// lwipopts.h source (controls how the server is built):
// /home/florian/pico/pico-sdk/lib/lwip/src/include/lwip
