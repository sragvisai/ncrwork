#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void expand(char *s1, char *s2)
{
	int len = 0,i=0,q=0,diff=0,y=0;
	char t;
	len = strlen(s1);
	//printf("len=%d\n", len);
	for (i = 0; i < len; i++)
	{	
		if (s1[i] == '-')
		{
			
			diff = s1[i + 1] - s1[i - 1];
				y = 1;
				while (y < diff)
				{	

					s2[q] = s2[q-1] + 1;
					//printf("%c", s2[q]);
					y++;
					q++;
				}
			
		}
		else
		{
			//printf("i=%d,c=%c\n", i, s1[i]);
			s2[q] = s1[i];
			q++;
		}
	}
	for(i=0;i<q;i++)
	printf("%c", s2[i]);
}
void main()
{
	char *s1, s2[25];
	int n, i, count=0;
	printf("Enter the size of the array that you are about to use\n");
	scanf_s("%d", &n);
	s1 = (char *)malloc(sizeof(char)*(n + 1));
	printf("Enter the array\n");
	scanf_s("%s", s1, n + 1);
	for (i = 0; i < n; i++)
	{
		if (isdigit(s1[i]))
		{
			count++;
			//printf("c=%d\n", count);
		}
		else if (isalpha(s1[i]))
		{
			count++;
			//printf("c=%d\n", count);
		}
		else if (s1[i] == '-')
		{
			count++;
			//printf("c=%d\n", count);
		}
		else
			printf("Somethings not right\n");

	}
	//printf("Here");
	if (count==n)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0 && s1[i] == '-') {
				printf("Wrong input\n");
				return 0;
				//system("pause");
			}
			else if (i == n - 1 && s1[i] == '-')
			{
				printf("Something wrong here\n");
				return 0;
				//system("pause");
			}
			else if (s1[i] == '-' && ((!isalpha(s1[i+1])) && !isdigit(s1[i+1])))
			{
				printf("Something wrong\n");
				return 0; 
				//system("pause");
			}
			
		}
	}
	expand(s1, s2);

	system("pause");
}
