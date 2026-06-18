#!/bin/bash
echo "1) Add"
echo "2) Subtract"
echo "3) Multiply"
read -p "Choose option: " opt
read -p "Enter a: " a
read -p "Enter b: " b.
case $opt in
1) echo "sum = $((a + b))" ;;
2) echo "sub = $((a - b))" ;;
3) echo "mul = $((a * b))" ;;
*) echo "Invalid option" ;;
esac
