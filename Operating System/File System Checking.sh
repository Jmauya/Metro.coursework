#!/bin/bash
read -p "Enter filename: " fname
if [ -f "$fname" ]
then
echo "File exists: $fname"
else
echo "File not found"
fi
