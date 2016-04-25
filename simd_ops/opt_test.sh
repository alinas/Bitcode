#!/bin/bash

testname=$1
arch=$3
srcin=$2/${arch}_unopt_bcfiles/${testname}.bc
outpath=${arch}_opt_bcfiles
srcout=${outpath}/${testname}.ll

if [ -z "$testname" ]
then
  echo "Error: Pass test name as parameter"
  exit 1
fi

mkdir -p $outpath
../../../bin/opt -O3 ${srcin} -S -o ${srcout}
cat ${srcout} | sed -e 's:@unopt_test_op:@test_op:g' > ${srcout}_tmp
cat ${srcout}_tmp | sed -e 's:@__unopt_test_op:@__test_op:g' > ${srcout}
../../../bin/llvm-as ${srcout}
rm ${srcout}_tmp
rm ${srcout}


