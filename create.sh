#!/bin/sh
types=`echo "icpc codeforces ruta_n" | tr ' ' '\n'`
type=`echo "$types" | fzf`
if [$type == "codeforces"]
then
    printf "Round Number: "
    read round
    printf "Div: "
    read div
    directory=`echo "$type/round_"$round"_div"$div""`
else
    directory=`echo "$type/round_"$round"_div_"$div""`

mkdir -p "$directory" && cd "$directory"
# echo $line
# dirs=`find * | grep '.cpp$' | tr '\n' '\0' | xargs -0 echo | cut -f 1 -d '.'`
# dirs=`find * | grep '.cpp$'`
# echo $dirs
# for dir in $dirs; do
    # echo $dir
#    mkdir $dir && mv "$dir.cpp" dir;
# done
