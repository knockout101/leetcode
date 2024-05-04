#include <stdio.h>
#include <string.h>

char* sample1 = "hello";
char* sample2 = "bye";


char* mergeAlternately(char* word1, char* word2)
{
	char res[201];

	int s1 = strlen(word1), s2 = strlen(word2), i = 0, j = 0;

	if (s1 > s2)
	{
		for(; i < s2; i++)
		{
			res[j] = word1[i];
			res[j + 1] = word2[i];
			j += 2;
		}
		
		while(i < s1)
		{
			res[j++] = word1[i++];
		}
		
		res[j] = '\0';
	}
	else if(s1 < s2)
	{
		for(; i < s1; i++)
		{
			res[j] = word1[i];
			res[j + 1] = word2[i];
			j += 2;
		}
		
		while(i < s2)
		{
			res[j++] = word1[i++];
		}
		
		res[j] = '\0';

	}
	else
	{
		
	}
	return res;
}

int main(void)
{
	char* res = mergeAlternately(sample1, sample2);
	printf("Sample 1 = %s\nSample 2 = %s\nResult = %s\n", sample1, sample2, res);

	return 0;
}
