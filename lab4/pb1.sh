echo "Dati un fisier: "
read x
while [ $x != 0 ]
do
	sed -r 's/([a-zA-Z0-9]+) ([a-zA-Z0-9]+) ([a-zA-Z0-9]+)/\3 \2 \1/' $x
	echo "Dati un fisier: "
	read x
done
