#!/bin/bash
city=$(echo $1 | tr 'abcdefghijklmnopqrstuvwxyz' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ')
if (($# > 0)); then grep -c $city; else wc -l; fi
exit
