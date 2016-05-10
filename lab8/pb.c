#include<stdio.h>

int ft_strlen(char *s)
{
	int i = 0;
	while( s[i++] );
	return i;;
}

char * ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while( s2[i] )
	{
		s1[i] = s2[i++];
	}
	return s2;
}

int main( int argc, char *argv[])
{
	File *f1, *f2;
	clrscr();
	f1 = fopen("Data.txt", "w");
	f2 = fopen(argv[1], "r");
	int c;
	while( (c = getn(f2)) != EOF)
	{
		if ( c%2 )
			fprintf(f1, c);
	}
	fclose(f1);
	fclose(f2);
	f1 = open("Data.txt", "r");
	f2 = open(argv[1], "w");
	while( (c = getn(f2)) != EOF)
		fprintf(f2, c);
	fprintf(f2, "\0");
	fclose(f1);
	fclose(f2);
	return (0);
}
