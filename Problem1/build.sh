#!/bin/bash
  
# This script builds the C file for makeLED-hw7...

echo "Building the file."
sudo chmod a-rwx makeLED-hw7.cpp
sudo g++  makeLED-hw7.cpp -o makeLED-hw7
echo "Finished..."
