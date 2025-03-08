/*Nhập vào số nguyên dương h, in ra màn hình các tam giác sau:

		*							*					* * * * *
		* *						  * * *					* * * *
		* * *					* * * * *				* * *
		* * * *				  * * * * * * *				* *
		* * * * *			* * * * * * * * *			*			*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		// In ra 1 dòng có m dấu *
		for (int j = 1; j <= i; j++)
			printf("* ");

		// Xuống hàng
		printf("\n");
	}

	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf("  ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}