/* Xuất n số chính phương đầu tiên vơi n>0 nhập từ bàn phím.
Ví dụ: n=3. 3 số chính phương đầu tiên là:
	1	4	9 */

#include <stdio.h>

int main()
{
	int n;

	// Nhập số nguyên dương n
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Vui long nhap so lon hon 0!\n");
		return 1;
	}

	printf("%d so chinh phuong dau tien la:\n", n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d\t", i * i);
	}

	printf("\n");
	return 0;
}