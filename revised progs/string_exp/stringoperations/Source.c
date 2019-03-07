#include<stdio.h>
#define size 30
char* strcpy(char *p, char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return s;
}
void strcat(char *t, char *s)
{
	t = t + strlen(t);
	while (*s != NULL)
	{
		*t = *s;
		t++;
		s++;

	}
	*t = '\0';
}
char * strrev(char *str)
{
	int i = 0, len = 0, j = 0;
	char temp, *end,*start;
	end = str;
	start = str;
	while (str[i] != '\0')
	{
		len++;
		end++;
		i++;
	}
	end--;
	for (i = 0; i < len / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		end--;
		start++;
	}
	return str;
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
	char *r, concat[size], comp[size];
	int i = 0, j = 0;
	int first_length = 0, second_length = 0;
	printf("Enter the first string length\n");
	scanf("%d", &first_length);
	printf("\n Enter the second string length\n");
	scanf("%d", &second_length);
	char *first = (char *)malloc(sizeof(char) *(first_length+1));
	char *second = (char *)malloc(sizeof(char) * (second_length+1));
	if (first == NULL || second == NULL)
	{
		printf("PROGRAM TERMINATED\n");
		return -1;
	}
	else
	{
		printf("enter the first string\n");
		scanf("%s", first);
		printf("Enter the second  string\n");
		scanf("%s", second);
		printf("Performing the string copy operation on %s onto %s\n\n", first, second);
		printf("Source and destionation strings are %s and %s \n", first, second);
		strcpy(first, second);//s is being copied into p
		printf(" Copied as %s\n", first);
		printf("Performing the concatenation operation\n\n");
		printf("Enter a destination string\n");
		scanf("%s", concat);
		strcat(concat, first);
		printf("concatenated result %s\n", concat);
		printf("\n\n Reversing the string is being done\n\n");
		printf("Before reversing the string %s\n", first);
		strrev(first);
		printf("\nReverse of the string %s\n", first);
		printf("\n\n String comparision\n\n");
		printf("\nEnter a string to be compared with %s----", first);
		scanf("%s", comp);
		i = strcmp(first, comp);
		if (i == 0)
			printf("The strings %s and %s are equal\n", first, comp);
		else
			printf("The strings %s and %s are not equal\n", first, comp);
		free(second);
		second = NULL;
		free(first);
		first = NULL;
	}
	getch();

}