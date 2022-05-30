#!/bin/sh

available=$(df -h /dev/sda3 | tail -1 | awk '{print $ 4}')
used=$(df -h /dev/sda3 | tail -1 | awk '{print $ 5}')

echo $available 

