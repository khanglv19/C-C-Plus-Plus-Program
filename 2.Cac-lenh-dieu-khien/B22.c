// Viết chương trình in bảng cửu chương số n, n nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

void main()
{
	int n;

	printf("\nBan muon xuat bang cuu chuong nao?: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
	_getch();
}