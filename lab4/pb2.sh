echo "Primul parametru: "
read x
while read line
do
	read y
	while [ $y != 0 ]
	do
		grep -R $line | xargs rm -f $y
	done
done < $x
