// Viết hàm nhập một mảng a gồm n số nguyên

#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100

void nhapMang(int a[], int &n);

void main()
{
	int a[MAXSIZE], n;
	nhapMang(a, n);
	_getch();
}

void nhapMang(int a[], int &n)
{
	printf("\nCho biet so phan tu (kich thuoc) cua mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++){
		printf("\nNhap phan tu a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}
