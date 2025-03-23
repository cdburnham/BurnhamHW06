#!/bin/bash

# This script builds the C file for myCopier...

echo "Building the file."
sudo chmod a-rwx myCopier.cpp
sudo g++  myCopier.cpp -o myCopier
echo "Finished..."
