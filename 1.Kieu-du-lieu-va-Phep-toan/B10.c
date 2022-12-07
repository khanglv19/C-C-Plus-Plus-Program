//Nhập vào hai số nguyên a, b. Tìm số lớn nhất trong hai số.

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b;
	printf("Nhap hai so nguyen: ");
	scanf_s("%d%d", &a, &b);
	int max = (a > b) ? a : b;
	printf("\nSo lon nhat la: %d", max);
	_getch();
}