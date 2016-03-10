#!/bin/bash

filename=$1
srcpath=$2
outpath=cppdrivers

if [ -z "$filename" ]
then
  echo "Error: Pass test name as parameter"
  exit 1
fi

if [ ! -z "$srcpath" ]
then
  srcpath+=/
fi

mkdir -p $outpath

filenamenoextension=`echo "${filename}" | cut -d . -f 1`
filenamenopath=`echo "${filenamenoextension##*=}"`

len=$((${#filenamenopath}-5))
testname=${filenamenopath:5:$len}

#Create custom header: filter_testname.h
cat ${srcpath}/filter_template.h | sed -e 's:OPNAME:'"${testname}"':g' > ${outpath}/filter_test_${testname}.h

#Create custom driver: simd_ops_testname.cpp
echo "#include \"filter_test_${testname}.h\"" > ${outpath}/simd_ops_test_${testname}.cpp
cat ${srcpath}/simd_ops.cpp >> ${outpath}/simd_ops_test_${testname}.cpp

#Create reference file (?)
#echo "Testing test_${testname}
#exit 0" > ${srcpath}/simd_ops_test_${testname}.reference_output


