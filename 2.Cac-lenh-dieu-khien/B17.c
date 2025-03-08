// Viết chương trình tính tổng: 1*2 + 2*3 + 3*4 + 4*5 +...+ n(n+1), trong đó n>0 nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

int main()
{
	int n, tong = 0;

	do
	{
		printf("\nNhap vao so n: ");
		scanf("%d", &n);
	} while (n <= 0);

	int s = 1;

	while (n > 1)
	{
		s = s * n;
		n--;
	}
	printf("Ket qua la: %d", s);
	return 0;
}