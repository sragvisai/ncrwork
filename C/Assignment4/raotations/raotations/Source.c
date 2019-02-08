#include<stdio.h>
void main()
{
	char s[25],temp;
	int i = 0,j=0,len=0;
	printf("Enter the string\n");
	scanf_s("%s", s,25);
	len = strlen(s);
	
	for (i = 0; i < len; i++)
	{	
		printf("%s\n", s);
		temp = s[0];
		for (j = 0; j < len-1; j++)
		{
			s[j] = s[j + 1];
		}
		s[len-1] = temp;
		
	}
	getch();
}