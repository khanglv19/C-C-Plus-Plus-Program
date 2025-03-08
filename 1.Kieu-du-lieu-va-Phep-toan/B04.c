// Viết chương trình tính giá trị của biểu thức, trong đó x là số nguyên nhập từ bàn phím:
// F(x) = 1 + x / 1 - x			G(x) = 1 + 5x - 7x^2 / 2 + 3x^3

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x;

	printf("Nhap so nguyen x: ");
	scanf("%d", &x);

	int f, g;

	f = (1 + x) / (1 - x);
	g = (1 + (5 * x) - (7 * pow((float)x, 2)) / (2 + (3 * pow((float)x, 3))));

	printf("\nF(x) = %d\t\tG(x) = %d", f, g);
	return 0;
}