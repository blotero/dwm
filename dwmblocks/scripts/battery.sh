#!/bin/sh
echo "scale=2 ; $(cat /sys/class/power_supply/BAT1/energy_now ) / $(cat /sys/class/power_supply/BAT1/energy_full ) * 100" | bc
