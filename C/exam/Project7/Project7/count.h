#pragma once
#include<stdio.h>
#include<ctype.h>

void count(FILE *fp1)
{
	int a = 0, d = 0, sp = 0, spc = 0;
	char c;
	while (!(feof(fp1)))
	{
		c = fgetc(fp1);
		printf("%c", c);
		if (isalpha(c))
			a++;
		else if (isdigit(c))
			d++;
		else if (c == ' ')
			sp++;
		else if(c=='!'||c=='@'||c=='#'||c=='$'||c=='*'||c=='^'||c=='&')
			spc++;
	}
	printf("\n");
	printf("alphabets = %d dgits =%d spaces =%d special characters =%d \n", a, d, sp,spc);
}