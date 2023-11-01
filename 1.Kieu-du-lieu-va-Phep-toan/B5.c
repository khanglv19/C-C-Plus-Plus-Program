/*Viết chương trình tính giá trị của biểu thức, trong đó a, b, c là số nguyên nhập từ bàn phím.
F(x) = -b + sqrt(b^2 - 4ac) / 2a			G(x) = -b - sqrt(b^2 - 4ac) / 2a */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int a, b, c;

	printf("Nhap ba so nguyen: ");
	scanf("%d%d%d", &a, &b, &c);

	int f, g;

	f = (-b + sqrt((float)b * b - 4 * a * c)) / (2 * a);
	g = (-b - sqrt(pow((float)b, 2) - 4 * a * c)) / (2 * a);

	printf("\n\nF(x) = %.2d\tG(x) = %.2d", f, g);
	getch();
}