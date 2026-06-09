#!/bin/bash
cd /home/florian/pico/pico-projects/thermal-imaging/build
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program thermal-imaging.elf verify reset exit"
