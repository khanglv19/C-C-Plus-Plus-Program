// Viết chương trình tính tổng: 1 + 2 + 3 + 4 + 5 +...+ 20

#include <stdio.h>
#include <conio.h>

int main()
{
	int tong = 0;
	for (int i = 1; i <= 20; i++)
		tong += i;
	printf("\n\tKet qua la: %d", tong);
	return 0;
}