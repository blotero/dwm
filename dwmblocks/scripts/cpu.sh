#!/bin/sh

count=0;
total=0; 

for i in $(cat /sys/devices/system/cpu/cpu*/cpufreq/scaling_cur_freq)
   do 
     total=$(echo $total+$i | bc )
     ((count++))
   done
   result=$(echo "$total / $count / 1000" | bc ) 
   echo $result "MHz"

