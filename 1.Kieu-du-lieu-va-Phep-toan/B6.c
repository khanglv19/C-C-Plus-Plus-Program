/*Viết chương trình tính giá trị của biểu thức, trong đó a, b, c là số nguyên nhập từ bàn phím.
f(x) = 3x^2 + 4x + 5 / 2x + 1			g(x) = 3x^5 + 2x + sqrt(x+1) / 5x^2 - 3*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int x;
	printf("Nhap so nguyen x: ");
	scanf_s("%d", &x);
	float f, g;
	f = (3 * pow((float)x, 2) + 4 * x + 5) / (2 * x + 1);
	g = (3 * pow((float)x, 5) + 2 * x + sqrt((float)x + 1)) / (5 * pow((float)x, 2) - 3);
	printf("\n\nf(x) = %.2f\t\tg(x) = %.2f", f, g);
	_getch();
}