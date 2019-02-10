#include<stdio.h>
void strcpy(char *p, char *s)
{
	while ((*p = *s) != '\0')
	{
		s++;
		p++;
	}
	
}
void strcat(char *t, char *s)
{
	int i = 0, j = 0;
	while (t[i] != '\0')
	{
		i ++ ;
	}
	printf("i=%d\n", i);
	while (s[j] != '\0')
	{
		j++;
	}
	j = 0;

		while (s[j]!='\0')
		{
			t[i] = s[j];
			i++;
			j++;
		}
		
		printf("\n");
}
void strrev(char *s)
{
	int i = 0,len=0,j=0;
	char t,*e;
	e = s;
	while (s[i] != '\0')
	{
		len++;
		e++;
		i++;
	}
	e--;
	for (i=0;i<len/2;i++)
	{	
		t = *s;
		*s = *e;
		*e = t;
		e--;
		s++;
	}
}
int strcmp(char *s, char *p)
{
	int i = 0;
	while (s[i] == p[i])
	{
		if (s[i] == '\0')
			return 0;
		++i;

	}
	return s[i] - p[i];
}
void main()
{
	char *r;
	int i = 0,j=0;
	char *s = (char *)malloc(sizeof(char) * 10);
	char *p = (char *)malloc(sizeof(char) * 10);
	char *t = (char *)malloc(sizeof(char) * 8);
	printf("enter the value for string\n");
	scanf_s("%s", s, 10);
	printf("Enter an another string\n");
	scanf_s("%s", t, 10);
	if (s == NULL || p == NULL|| t==NULL)
	{
		printf("PROGRAM TERMINATED\n");
		return -1;
	}
	else
	{
		strcpy(p, s);
		printf(" Copied as %s\n", p);
		strcat(t, s);
		printf("concatenated result %s\n", t);
		for (j = 0; j <(strlen(s)+strlen(t)); j++)
			printf("%c", t[j]);
		strrev(s);
		printf("Reverse of the string %s\n", s);
		i=strcmp(s, p);
		if (i == 0)
			printf("The strings are equal\n");
		else
			printf("The strings %s and %s are not equal =%d\n",s,p ,i);
	}
	getch();
	
}