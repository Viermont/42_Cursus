#!/bin/bash

arch_kernel=$(uname -a)

cpu_physic=$(grep "physical id" /proc/cpuinfo | wc -l)
cpu_virt=$(grep "processor" /proc/cpuinfo | wc -l)

ram_total=$(free --mega | awk '$1 == "Mem:" {print $2"MB"}')
ram_usage=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f%%"), $3/$2*100}')

disk_info=$(df -m | grep "/dev/" | grep -v "/boot")
disk_total=$(echo "$disk_info" | awk '{d_total += $2} END {printf ("%.1fGb\n"), d_total/1024}')
disk_usage=$(echo "$disk_info" | awk '{d_usage += $3} END {print d_usage}')
disk_percent=$(echo "$disk_info" | awk '{d_usage += $3} {d_total+= $2} END {printf("%d%%"), d_usage/d_total*100}')

cpu_percent=$(vmstat 1 2 | tail -1 | awk '{printf ("%.1f%%", 100 - $15)}')

last_boot=$(who -b | awk '$1 == "system" {print $3 " " $4}')

lvm_status=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

tcp_connect=$(ss -ta | grep ESTAB | wc -l)

users_count=$(users | wc -w)

ip_address=$(hostname -I)
mac_address=$(ip link | grep "link/ether" | awk '{print $2}')

sudo_comm_count=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "  Architecture: $arch_kernel
        CPU physical: $cpu_physic
        vCPU: $cpu_virt
        Memory Usage: $ram_usage/${ram_total} ($ram_percent)
        Disk Usage: $disk_usage/${disk_total} ($disk_percent)
        CPU load: $cpu_percent
        Last boot: $last_boot
        LVM use: $lvm_status
        Connections TCP: $tcp_connect ESTABLISHED
        User log: $users_count
        Network: IP $ip_address ($mac_address)
        Sudo: $sudo_comm_count cmd"
