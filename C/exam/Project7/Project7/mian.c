#include<stdio.h>
#include"count.h"
#include"tab2.h"
#include"comments.h"
void main()
{
	int n;
	char *s = NULL;
	FILE *fp1, *fp2,*fp3;
	fopen_s(&fp1, "sample.txt", "r+");
	fopen_s(&fp2, "sample2.txt", "w+");
	printf("Enter the choice\n 1. for counting \n 2.replace tab\n 3.exit\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: count(fp1);
		break;
	case 2:	tab2(fp1, fp2);
		break;
	case 3:rewind(fp1);
			comments(fp1,fp2);
			break;
	default:
		break;
	}
	getch();
}
