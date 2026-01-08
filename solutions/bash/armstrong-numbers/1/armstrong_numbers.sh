#!/usr/bin/env bash

num=$1
len=${#num}
sum=0 

for (( i=0; i<$len; i++ )); do
    sum=$(( sum + (${num:$i:1}**len) ))
done

[[ $sum -eq $num ]] && echo "true" || echo "false"
