#!/bin/bash

if (("$#" != 2)); then
  echo "Usage goog.sh WORD WEBSITE"
else
  nums=$(wget -O - $2 | grep -o $1 | wc -l)
  echo $1 ":" $nums  
fi
