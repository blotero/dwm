#!/bin/sh

available=$(df -h /dev/mapper/lenovo--vg-root | tail -1 | awk '{print $ 4}')
used=$(df -h /dev/mapper/lenovo--vg-root | tail -1 | awk '{print $ 5}')

echo F:$available U:$used

