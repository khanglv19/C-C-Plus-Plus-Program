//Viết chương trình tính giá trị F(x) và G(x), trong đó x là số nguyên nhập từ bàn phím:
//F(x) = 5x ^ 2 + 6x + 1			G(x) = 2x^4 - 5x^2 + 4x + 1

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int x;
	printf("Nhap so nguyen x: ");
	scanf_s("%d", &x);
	int f, g;
	f = 5 * pow((float)x, 2) + (6 * x) + 1;
	g = 2 * pow((float)x, 4) - (5 * pow((float)x, 2)) + (4 * x) + 1;
	printf("\nF(x) = %d\t\tG(x) = %d", f, g);
	_getch();
}