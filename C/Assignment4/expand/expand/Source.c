#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ex(char *s1, char *s2)
{
	int len = 0,i=0,q=0,diff=0,y=0;
	char t;
	len = strlen(s1);
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
			s2[q] = s1[i];
			q++;
		}
	}
	for(i=0;i<q;i++)
	printf("%c", s2[i]);
}
void main()
{
	char s1[25],s2[25];
	printf("Enter the array\n");
	scanf_s("%s", s1, 25);
	 ex(s1, s2);
	 getch();
}