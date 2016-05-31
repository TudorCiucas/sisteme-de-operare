#include <stdio.h>

void printArray (int *string, char character, int count)
{
	for (int i = 0; i <= 25; i++)
	{
		if ( string[i] )
			printf("%c-%f\n", character, string[i]/(double)count);
		character++;
	}
}

int main (int argc, char *argv[])
{
	int count = 0;
	FILE *inputFile;
	int ch; //character or EOF flag
	int freqBig[26] = {0};
	int freqSmall[26] = {0};
	
	inputFile = fopen(argv[1], "r");
	
	if (!inputFile) {
		printf("Cannot open %s", argv[1]);
		return(0);
	}

	while ( (ch = fgetc(inputFile)) != EOF ) {
		count++;
		if (ch >= 'a' && ch <= 'z')
			freqSmall[(int)ch - 'a']++;
		else if (ch >= 'A'&& ch <= 'Z')
			freqBig[(int)ch - 'A']++;
	}

	printf("\nThe statistic of every small letter in the text file:\n");
	printArray(freqSmall, 'a', count);
	printf("\nThe statistic of every big letter in the text file:\n");
	printArray(freqBig, 'A', count);

	return(0);
}
