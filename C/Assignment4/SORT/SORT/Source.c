#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	//char(*name)[25];
	int n = 0, i = 0,j=0;
	char temp[25];
	printf("Enter the number of n's\n");
	scanf_s("%d",&n);
	char (*name)[25] = (char(*)[25])malloc(n * 25);
	for (i = 0; i < n; i++)
	{
		printf("Enter the %d student name\n", i + 1);
		scanf_s("%s", name[i], 25);
		for (j =0; j <=i ; j++)
		{
			if (strcmp(name[i], name[j])<0)
			{
					strcpy_s(temp, 25,name[i] );
					strcpy_s(name[i], 25,name[j]);
					strcpy_s(name[j], 25,temp);
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%s \t", name[i]);
	getch();
}