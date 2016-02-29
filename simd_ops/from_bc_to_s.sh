#!/bin/bash

file=$1

if [ -z "$file" ]
then
  echo "Error: Pass bitcode input file as parameter"
  exit 1
fi

#use me in the future:
#llc $file >/dev/null 2>&1

llvm-dis $file
if [ $? -ne 0 ]
then
  echo "Error: Failed to disassemble bitcode file: " $file
  exit 1
else
  llfile=${file%*.bc}.ll
  sfile=${file%*.bc}.s
  attrs=`cat $llfile | grep "halide_mattrs" | cut -d'"' -f 4`
  mcpu=`cat $llfile | grep "halide_mcpu" | cut -d'"' -f 4`
  rm ${llfile}
  llc -mattr=${attr} -mcpu=${mcpu} $file >/dev/null 2>&1
  if [ $? -ne 0 ]
  then
    echo "Error: Failed to assemble bitcode file: " $file
    exit 1
  fi
  #rm ${sfile}
fi

#Sample halide mattr/mcpu
#!3 = !{i32 2, !"halide_mattrs", !"+fma,+f16c"}
#!2 = !{i32 2, !"halide_mcpu", !"corei7-avx"}
