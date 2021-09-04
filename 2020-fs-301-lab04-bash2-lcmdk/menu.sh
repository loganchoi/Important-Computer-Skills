#!/bin/bash


menu_input(){
 read choice
 echo $choice
}

for file in *;do
  echo "v) View " $file
  echo "e) Edit " $file
  echo "c) Compile" $file
  echo "x) Execute" $file
  echo "q) Quit"

  c=$(menu_input)
  case $c in
    v)
       less $file
       ;;
    e)
       jpico $file
       ;;
    c)
       g++ $file
       ;;
    x)
       if [[-x $file]]; then
         $file
       else
         g++ $file
         $file
       fi
       ;;
    q)
       exit
       ;;
    *)
       echo "Invalid Response: Skipping File"
       ;;
  esac

done
