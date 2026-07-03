#!/bin/bash

read -p "Enter your username: " user
if [ "$user" = "admin" ]
then
echo "Hello Admin"
else
echo "Hello $user"
fi
