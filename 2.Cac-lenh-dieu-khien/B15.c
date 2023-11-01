// Viết chương trình tính tích: 1 * 2 * 3 * 4 * 5 *...* n, trong đó n>0 nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

void main()
{
	int n, tich = 1;

	printf("\n\tNhap mot so nguyen n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		tich = tich * i;

	printf("\n\t\tKet qua la: %d", tich);
	getch();
}