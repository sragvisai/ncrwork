#include<stdio.h>
void main()
{
	int len = 0, i = 0, j = 0, temp = 0;
	printf("Enter the length\n");
	scanf_s("%d", &len);
	int *arr = (int *)malloc(sizeof(int)*len);
	if (arr == NULL)
	{
		printf("Terminated\n");
		return -1;
	}
	else {
		for (i = 0; i < len; i++)
		{
			scanf_s("%d", (arr + i));
		}
		//printf("Hey\n");
		i = 0;
		j = len - 1;

		while (i < len && i<j)
		{
			if (arr[i] > 0)
			{
				while (j >= 0)
				{
					if (arr[j] < 0)
					{
						temp = arr[j];
						arr[j] = arr[i];
						arr[i] = temp;
						j--;
						break;

					}
					else
						j--;


				}
				i++;
			}
			else
				i++;


		}
	}
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	getch();
}