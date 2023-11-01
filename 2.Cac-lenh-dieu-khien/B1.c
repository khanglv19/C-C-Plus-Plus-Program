// Viết chương trình nhập vào số nguyên, kiểm tra số đã nhập là số âm hay số dương.

#include <stdio.h>
#include <conio.h>

void main()
{
	int n;

	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);

	if (n > 0)
		printf("\nSo vua nhap la so duong (+)");
	else
	{
		if (n < 0)
			printf("\nSo vua nhap la so am (-)");
		else
			printf("\nSo vua nhap khong la so duong cung khong la so am");
	}
	getch();
}