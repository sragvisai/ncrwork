#include<stdio.h>
int replace(char *s)
{
	printf("%s", s);
	return 1;
}
void main()
{
	char *cat = " The cat set";
	int s = 0;
	s = replace(cat);
	printf("%d\n", s);
	getch();
}