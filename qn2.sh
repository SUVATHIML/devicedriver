#!/bin/bash
echo "Hello World"
for arg in "$@"
do
index=$(echo $arg | cut -f1 -d=)
val=$(echo $arg | cut -f2 -d=)
case $index in
X) x=$val;;

Y) y=$val;;

*)
esac
done
((result=x+y))
echo "X+Y=$result"


if [ $result -lt 10 ];
then
echo "It is a one digit number"
else
echo "It is a two digit number"
fi

Rectangle_Area() {
area=$(($1 * $2))
echo "Area is : $area"
}

Rectangle_Area 20 30
