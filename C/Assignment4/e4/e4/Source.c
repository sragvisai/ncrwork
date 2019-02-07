#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i = 0, j = 0, len = 0, c = 0, slen = 0;
	char * s[] = { "we will teach you how to ","Move a mountain ","Level a building ","Erase the past ","Make a million " };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < (strlen(s[i]) - 1); j++)
			if (s[i][j] == 'e')
				c++;
	}
	printf("%d", c);
	getch();
}