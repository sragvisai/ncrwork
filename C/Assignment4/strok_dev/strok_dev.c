#include<stdio.h>
#include<stdlib.h>
char * strok(char *s, char c)
	{
	int i = 0,j=0,z=0;
	static int b;
	char *t;
	j = 0;
	i=b;
	z=0;
	while(s[i]!=c&s[i]!='\0')
	{
		z++;
		i++;
		
	}
	t=  (char *)malloc(sizeof(char)*z);
	j=0;
	i=b;
	while (j <z)
	{
		t[j] = s[i];
		j++;
		b++;
		i++;
	}
	t[j]='\0';
	b++;
	return t;
}
	

void main()
{	 
	char s[20];
	char c;
	char *temp;
	int count;
	int i=0;
	printf("Enter the string\n");
	scanf("%s", s);
	
	printf("Enter the delimiter\n");
	scanf(" %c",&c);
	while(s[i]!='\0')
	{
		if(s[i]==c){
			count++;			
		}
	
		i++;		
	}
	for(i=0;i<=count;i++)
{
	temp = strok(s,c);
	printf("%s\n", temp);
	free(temp);
}
	getch();

}
