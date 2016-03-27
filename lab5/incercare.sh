files=0
words=0
some=0

echo "Waiting..."
while read x
do
	if [$x -eq 'Exit']
	then
		break
	fi
	files= $files + 1
	words=($(wc -w $x))
done
some=( $words / $files )
