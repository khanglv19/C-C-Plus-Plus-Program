/*Cấu trúc lặp:
a. Kiểm tra xem một số nguyên dương n có phỉa là số đối xứng không.
b. Tính giá trị biểu thức: S = 1/2 + 1/3 + 1/5 + ... + 1/2n+1
c. Tính giá trị biểu thức: S = sqrt(1^3) + sqrt(2^3) + ... + sqrt(n^3) */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int kiemTraDoiXung(int n);
float tongS1(int n);
float tongS2(int n);

void main()
{
	int n;

	printf("Nhap mot so nguyen duong: ");
	scanf_s("%d", &n);

	printf("\n===========================================================================\n");
	printf("\n\tKIEM TRA SO DOI XUNG\n");

	int kq1 = kiemTraDoiXung(n);

	if (kq1 == 1)
		printf("\nSo %d doi xung!", n);
	else
		printf("\nSo %d khong doi xung!", n);

	printf("\n===========================================================================\n");
	printf("\n\tTINH GIA TRI BIEU THUC: S = 1/2 + 1/3 + 1/5 + ... + 1/2n+1\n");
	printf("\nKet qua: %.2f", tongS1(n));
	printf("\n===========================================================================\n");
	printf("\n\tTINH GIA TRI BIEU THUC: S = sqrt(1^3) + sqrt(2^3) + ... + sqrt(n^3)\n");
	printf("\nKet qua: %.2f", tongS2(n));
	_getch();
}

int kiemTraDoiXung(int n)
{
	int soDX = 0;
	int nn = n;

	while (n > 0)
	{
		// Thêm hàng đơn vị vào soDX
		soDX = soDX * 10 + n % 10;
		n = n / 10;
	}

	if (soDX == nn)
		return 1;
	else
	{
		return 0;
	}
}

float tongS1(int n)
{
	float tong = 0;

	for (int i = 0; i <= n; i++)
		tong = tong + 1 / (2 * i + 1.0);
	return tong;
}

float tongS2(int n)
{
	float tong = 0;

	for (int i = 1; i <= n; i++)
		tong = tong + sqrt(pow(1.0, 3));
	return tong;
}