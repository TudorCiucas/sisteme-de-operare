awk 'BEGIN{
	file = ARGV[1];
	*f;
	i = 0;
	while ( getline )
	{
		if( index("voidintcharbool", $1) )
		{
			a[i] = $2;
			i++;
			b[i]++;
			getline
		}
		j = 1;
		while ( $j != a[j] 
		
	}
}' ex.c
