// Viết chương trình tính tổng: S = 1^2 + 2^2 + 3^2 +...+ n^2, với n>0 nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int n, tong = 0;

	printf("\n\tNhap so nguyen n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		tong += pow((float)i, 2);

	printf("\tKet qua la: %d", tong);
	return 0;
}