#!/usr/bin/bash

src=" "
for f90 in $(ls *.f90 *.f)
do 
    src=" $src $f90"
done

echo $src


exe=main
fopts="-g -o0"
gg=gfortran.exe

echo $gg $fopts $src -o $exe
$gg $fopts $src -o $exe
