awk 'BEGIN{
	words = 0;
	for( nrParam = 1; nrParam <= ARGC; nrParam++)
	{
		file = ARGV[nrParam];
		print file;
		x = 1;
		while ( getline )
		{
			words = words + NF;
		}
	}
	print "There are ", ARGC - 1, " files\n";
	print "There are ", words, " words\n";
	print "The average word number is: ", words/ARGC;
}' a.txt b.txt c.txt
