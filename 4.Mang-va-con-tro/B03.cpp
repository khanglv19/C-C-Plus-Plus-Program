// Viết hàm xuất mảng một chiều gồm n phần tử.

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
}

int main()
{
	int a[MAXSIZE], n;

	nhapMang(a, n);
	xuatMang(a, n);
	return 0;
}