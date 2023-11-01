// Nhập ba số nguyên a, b, c. Xuất số lớn nhất và số nhỏ nhất của ba số đó. (Dùng biểu thức điều kiện)

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;

	printf("Nhap ba so nguyen: ");
	scanf("%d%d%d", &a, &b, &c);

	int max1 = (a > b) ? a : b;
	int max = (max1 > c) ? max1 : c;
	int min1 = (a < b) ? a : b;
	int min = (min1 < c) ? min1 : c;

	printf("\nSo lon nhat la: %d\t\tSo nho nhat la: %d", max, min);
	getch();
}