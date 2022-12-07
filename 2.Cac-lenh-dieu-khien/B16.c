// Viết chương trình tính tổng: 2 + 4 + 6 + 8 +...+20, trong đó n>0 nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

void main()
{
	int tong = 0;

	for (int i = 0; i <= 20; i++)
		if (i % 2 == 0)
			tong += i;

	printf("\n\tTong la: %d", tong);
	_getch();
}