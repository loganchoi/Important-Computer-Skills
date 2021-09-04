#!/bin/bash

((lines=0))

((bigTotal=0))
while IFS= read -r line; do
   ((total=0))
   IFS=,
   for num in $line; do
      ((total+=num))
   done
   ((actualLine = $lines +1))
   echo "Line $actualLine: $total"
   ((bigTotal+=total))
   ((lines+=1))
done < $1
echo "$bigTotal divided by $lines"

((avg = bigTotal/lines))
echo "Average:" $avg
