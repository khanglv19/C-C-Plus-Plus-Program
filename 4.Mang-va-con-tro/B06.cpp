// Viết hàm tính tổng các phẩn tử chẵn (hoặc lẻ) của mảng số nguyên n phần tử.

#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10

void nhapMang(int a[], int &n)
{
	printf("\nCho biet so phan tu (kich thuoc) cua mang: ");
	scanf_s("%d", &n);

	printf("\n==============================================\n");

	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan tu a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	printf("\n==============================================\n");
}

void xuatMang(int a[], int n)
{
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n\n==============================================\n");
}

int tinhTongCacPhanTuChan(int a[], int n)
{
	int tong = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			tong += a[i];
	}
	return tong;
}

int main()
{
	int a[MAXSIZE], n;

	nhapMang(a, n);
	xuatMang(a, n);

	printf("\nTong cac phan tu chan la %d", tinhTongCacPhanTuChan(a, n));
	return 0;
}