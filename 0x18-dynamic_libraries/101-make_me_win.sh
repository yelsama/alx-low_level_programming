#!/bin/bash
wget -P /tmp https://github.com/yelsama/alx-low_level_programming/blob/master/0x18-dynamic_libraries/yasoWins.so
LD_PRELOAD=/tmp/yasoWins.so ./gm
