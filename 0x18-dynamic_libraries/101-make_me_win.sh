#!/bin/bash
wget -P /tmp/ https://raw.github.com/Joe-0009/alx-low_level_programming/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
