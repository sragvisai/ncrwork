#include<stdio.h>
void main()
{
	int len = 0,i=0,j=0,temp=0;
	printf("Enter the length\n");
	scanf_s("%d", &len);
	int *arr = (int *)malloc(sizeof(int)*len);
	for (i = 0; i < len; i++)
		scanf_s("%d", (arr + i));
	i = 0;
	j = len - 1;
	while (i < len&&j>=0)
	{
		if (arr[i] < 0)
			i++;
		else {
			temp = arr[i];
			i++;
		}
		if (arr[j] > 0) {
			j--;
		}
		else {
			arr[i] = arr[j];
			arr[j] = temp;
			j--;
		}

	}
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	getch();
}