#!/bin/bash
wget -P .. wget -P .. https://github.com/Joe-0009/alx-low_level_programming/blob/9aef96e4239e0adf60e2940f6c0c2ed3c6811e8e/0x18-dynamic_libraries/extra-project-files/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
