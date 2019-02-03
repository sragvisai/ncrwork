#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
	char text[80];
	int i = 0,c=0,t=0,s=0,d=0;
	printf("Enter the character\n");
	scanf_s("%c", &text[i]);
	while (text[i] != '\n')
	{
		if (isalpha(text[i]))
			c++;
		else if (isdigit(text[i]))
			d++;
		else if (text[i] == '\t')
			t++;
		else if (text[i] == ' ')
			s++;
		i++;
		scanf_s("%c", &text[i]);
	}
	printf("Characters are  %d  Spaces are %d Digits are %d Tabs are %d", c, s, d, t);
	getch();

}