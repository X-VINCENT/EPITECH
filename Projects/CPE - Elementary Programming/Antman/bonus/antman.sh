#!/bin/bash

# Get File Path
read -p "Enter the file path: " file
compressed_data="compressed.data"
uncompressed_data="uncompressed.data"

# Compile
make re

## Compress
echo ""
echo "Compressing Data..."
./antman/antman $file 1 > $compressed_data
if [ $? -eq 84 ]
then
    echo "ERROR"
    sleep 3
    make fclean && clear
    rm -f $compressed_data
    exit
else
    echo "SUCCESS"
fi

## Decompress
echo ""
echo "Uncompressing Data..."
./giantman/giantman $compressed_data 1 > $uncompressed_data
if [ $? -eq 84 ]
then
    echo "ERROR"
    sleep 3
    make fclean && clear
    rm -f $compressed_data
    rm -f $uncompressed_data
    exit
else
    echo "SUCCESS"
fi


## Compare Files Sizes
compressed_size=$(stat -c%s $compressed_data)
uncompressed_size=$(stat -c%s $uncompressed_data)
ratio=$(bc <<< "scale = 2; ($uncompressed_size - $compressed_size) / $compressed_size * 100")

echo ""
echo "$compressed_data   : $compressed_size bytes"
echo "$uncompressed_data : $uncompressed_size bytes"
echo "The file was compressed and reduced by $ratio % of its original size."

# Clean
echo ""
read -p "Do you want to delete .data files & clean ? " input
if [ "$input" = "y" ] || [ "$input" = "Y" ]
then
    rm -f $compressed_data
    rm -f $uncompressed_data
    make fclean && clear
fi
