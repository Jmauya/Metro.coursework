#!/bin/bash

read -p "Enter a: " a
read -p "Enter b: " b
sum=$((a + b))
sub=$((a - b))
mul=$((a * b))
echo "sum = $sum"
echo "sub = $sub"
echo "mul = $mul"
