#include<stdio.h>
#include<string.h>
int i = 0,j=0;
char str[25];
char revstr[25];
void rev(char c)
{
	if (c != '\0')
	{
		i++;
		rev(str[i]);
		revstr[j] = c;
		j++;
	}

}
void main()
{	

	printf("Enter the string\n");
	scanf_s("%s", str,25);
	rev(str[0]);
	printf("%s", revstr);
	getch();
}