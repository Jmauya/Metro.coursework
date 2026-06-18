#!/bin/bash
is_even() {
n=$1
if [ $((n % 2)) -eq 0 ]; then
return 0 # 0 means success/true
else
return 1 # non-zero means failure/false
fi
}
read -p "Enter n: " n
if is_even $n; then
echo "Even"
else
echo "Odd"
fi
