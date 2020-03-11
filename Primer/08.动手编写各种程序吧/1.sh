if [ $# -ge 2 ];
then 
echo "=========>$2<=========="
git add $1
git commit -m "add $1"
fi

gcc $1 -lm
if [ $? -eq 0 ];
then 
./a.out
else
 echo "======error======"
fi
