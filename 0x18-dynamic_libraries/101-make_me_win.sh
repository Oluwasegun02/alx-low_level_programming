#!/bin/bash
wget -P /tmp https://github.com/Oluwasegun02/alx-low_level_programming/raw/master/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so