// Viết hàm tính x^n bằng hàm sử dụng đệ quy

#include <stdio.h>
#include <conio.h>

float tinhLuyThua(float x, int n)
{
	if (n == 0)
		return 1;
	return x * tinhLuyThua(x, n - 1);
}

int main()
{
	float x;
	int n;

	printf("\nNhap co so: ");
	scanf_s("%f", &x);

	printf("\nNhap so mu: ");
	scanf_s("%d", &n);

	float tLT = tinhLuyThua(x, n);

	printf("\nKet qua cua %.1f^%d la %.1f", x, n, tLT);
	return 0;
}