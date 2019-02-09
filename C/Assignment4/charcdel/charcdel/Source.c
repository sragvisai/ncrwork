#include<stdio.h>
#include<string.h>
char *deletec( char *s,char c) 
{
	int len = 0,i=0,j=0;
	len = strlen(s);
	for (i = 0; i < len-1; i++)
	{
		if (s[i] == c)
		{
			s[i] = '\0';
		}
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == '\0')
		{
			j = i+1;
			while (j < len)
			{
				if (s[j] != '\0')
				{
					s[i] = s[j];
					s[j ] = '\0';
					break;
				}
				j++;
			}
		}
	}
	return s;

}
void main()
{
	char s[20],c,*d;
	printf("Enter a character\n");
	scanf_s("%c", &c);
	printf("Enter th string\n");
	scanf_s("%s", s, 20);
	
	d = deletec(s, c);
	printf("%s", d);
	getch();
}