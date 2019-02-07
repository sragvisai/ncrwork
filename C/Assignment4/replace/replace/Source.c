#include<stdio.h>
int replace(char *s)
{
	int c=0,i=0;
	while (s[i] != '\0')
	{
		if (s[i] == " ")
			c++;
		i++;
	}
	return c;
}
void main()
{
	char *cat = " The cat set";
	int s = 0;
	s = replace(cat);
	printf("%d\n", s);
	getch();
}