/* Xuất n số nguyên tố đầu tiên vơi n>0 nhập từ bàn phím.
Ví dụ: n=5. 5 số nguyên tố đầu tiên là:
	2	3	5	7	11 */

#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int isPrime(int num)
{
	if (num < 2)
		return 0;

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

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

	printf("%d so nguyen to dau tien la:\n", n);

	int count = 0, num = 2;
	while (count < n)
	{
		if (isPrime(num))
		{
			printf("%d\t", num);
			count++;
		}
		num++;
	}

	printf("\n");
	return 0;
}