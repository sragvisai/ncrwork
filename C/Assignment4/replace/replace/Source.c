#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rep(char *s)
{
	char *ca;
	int len = strlen(s), i = 0, c = 0;
	len++;
	ca = (char *)malloc(sizeof(char) * len);
	if (ca == NULL)
		return -1;
	else
	{
		strcpy_s(ca, len, s);
		for (i = 0; i < len; i++)
		{
			if (s[i] == ' ') {
				c++;
				ca[i] = '-';
			}
		}
		printf("%s\n", ca);
		return c;
	}
}
void main()
{
	char *cat = "The cat set";
	int s = 0;
	s = rep(cat);
	printf("%d\n", s);
	getch();
}