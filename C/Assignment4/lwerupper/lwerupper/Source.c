#include<stdio.h>
void main()
{
	char str[20];
	int i = 0;
	printf("Enter the lower string\n");
	scanf_s("%[^\n]s", str,25);
	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		printf("%c", str[i]);
		i++;
	}
	getch();
}
