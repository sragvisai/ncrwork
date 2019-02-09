#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n = 0,i=0;
	printf("Enter the number\n");
	scanf_s("%d", &n);
    char (*s)[25] = (char (*)[25])malloc(25*n);
	for (i = 0; i < n; i++)
	{
		printf("Enter %d name\n", i + 1);
		scanf_s("%s", s[i], 25);
	}
	for (i = 0; i < n; i++)
		printf("%s\n", s[i]);
	getch();
}