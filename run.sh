#!/bin/bash

set -eu

cd `dirname $0`

FILE_EXEC="out/main"

for FILE in `ls stdins`; do
  ID="${FILE%%.*}"
  FILE_STDIN="stdins/$FILE"
  FILE_STDOUT="out/$ID.out.txt"
  FILE_STDERR="out/$ID.err.txt"

  $FILE_EXEC < $FILE_STDIN > $FILE_STDOUT 2> $FILE_STDERR
done
