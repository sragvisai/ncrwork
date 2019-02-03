#include<stdio.h>
int main()
{
	int salary;
	printf("Enter the salary");
	scanf_s("%d", &salary);
	if (salary >= 1 && salary <= 4000)
		salary += (salary*0.1) + (salary*0.5);
	else if (salary > 4000 && salary <= 8000)
		salary += (salary*0.2) + (salary*0.6);
	else if (salary > 8000 && salary <= 12000)
		salary += (salary * 0.25) + (0.7*salary);
	else if (salary > 12000)
		salary += (0.3*salary) + (0.8*salary);
	else
	{
		printf("Enter valid salary");
		getch();
		return 0;
	}
	printf("Salary is %d", salary);
	getch();
}
