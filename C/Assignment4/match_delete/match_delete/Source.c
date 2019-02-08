#include<stdio.h>
char *dele(char *s1, char *s2)
{
	int len = 0,i=0,len2=0,j=0,z=0;
	len = strlen(s1);
	len2 = strlen(s2);
	for (i = 0; i < len; i++)
	{
		j = 0;
		while (j < len2)
		{
			if (s1[i] == s2[j])
			{
				s1[i] = '\0';
				break;
			}
			j++;
		}
	}
	i = 0;//
	
	while (i < len-1)
	{
		if (s1[i] == '\0')
		{
			j = i + 1;
			while (j < len)
			{
				//printf("HEY\n");

				if (s1[j] != '\0')
				{
					s1[i] = s1[j];
					s1[j] = '\0';
					j++;
					break;
				}
				else
				{
					j++;
				}
			}

		}
		i++;
	}
	
	return s1;
	
}
void main()
{
	char s1[20], s2[20];
	char *s;
	printf("Enter the string\n");
	scanf_s("%s", s1, 20);
	printf("Enter the second string\n");
	scanf_s("%s", s2, 20);
	s=dele(s1, s2);
	printf("%s", s);
	getch();
}