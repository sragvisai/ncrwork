#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 35
char * expand(char *initial_string, char *expanded_string)
{
	int initial_string_length = 0, i = 0, q = 0, diff = 0, y = 0;
	char t;
	initial_string_length = strlen(initial_string);
	for (i = 0; i < initial_string_length; i++)
	{
		if (initial_string[i] == '-')
		{
			diff = initial_string[i + 1] - initial_string[i - 1];
			y = 1;
			while (y < diff)
			{
				expanded_string[q] = expanded_string[q - 1] + 1;
				y++;
				q++;
			}

		}
		else
		{
			expanded_string[q] = initial_string[i];
			q++;
		}
	}
	expanded_string[q] = '\0';
	return expanded_string;
}
void main()
{
	char *initial_string, expanded_string[25], *resultant_array;
	int n, i;
	printf("Enter the size of the array that you are about to use\n");
	scanf_s("%d", &n);
	initial_string = (char *)malloc(sizeof(char)*(n + 1));
	if (initial_string == NULL)
	{
		printf("There is an error in allocating the memory\n");
		return;
	}
	else {
		printf("Enter the array\n");
		scanf("%s", initial_string);
		for (i = 0; i < n; i++)
		{
			if ((!isalpha(initial_string[i])) && (!isdigit(initial_string[i]) && (initial_string[i] != '-')))
			{
				printf("\nThe input array contains invalid symbols please check\n");
				system("pause");
				return 0;
			}
			else
			{
				if (initial_string[i] == '-')
				{
					if (!((isalpha(initial_string[i - 1]) && isalpha(initial_string[i + 1])) || (isdigit(initial_string[i - 1]) && isdigit(initial_string[i + 1]))))
					{
						printf("Somethings not right with input please check\n");

						system("pause");
						return 0;
					}
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			if (i == 0 && initial_string[i] == '-') {
				printf("Wrong input\n");
				return 0;
				system("pause");
			}
			else if (i == n - 1 && initial_string[i] == '-')
			{
				printf("Something wrong here\n");
				return 0;
				system("pause");
			}
			else if (initial_string[i] == '-' && ((!isalpha(initial_string[i + 1])) && !isdigit(initial_string[i + 1])))
			{
				printf("Something wrong\n");
				return 0;
				system("pause");
			}
			else if (initial_string[i] == '-')
			{
				if ((int)(initial_string[i - 1]) >= 65 && ((int)initial_string[i - 1]) <= 90)
				{
					initial_string[i - 1] = initial_string[i - 1] + 32;
					printf("The string  here is %s--\n", initial_string);


				}
				if (initial_string[i + 1] >= 65 && initial_string[i + 1] <= 90)
				{
					initial_string[i - 1] = initial_string[i - 1] + 32;
				}
			}

		}
		for (i = 0; i < n; i++)
		{
			if (initial_string[i] == '-' && (initial_string[i + 1] < initial_string[i - 1]))
			{
				printf("The alphabets or the numbers  are not in order\n");

				system("pause");
				return 0;
			}

		}
		resultant_array = expand(initial_string, expanded_string);
		printf("\Finally the expanded string is %s\n", resultant_array);
	}
	free(initial_string);
	initial_string = NULL;
	system("pause");
}
