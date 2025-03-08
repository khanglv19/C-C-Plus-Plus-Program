/*Cho a là ma trận vuông cấp n chứa các số nguyên
a. Tìm phần tử nhỏ nhất của tam giác chính trên.
b. Kiểm tra xem ma trận đã cho có phải là ma trận 0 hay không. Biết rằng ma trận vuông là ma trận mà tất cả các phần tử đều là 0.
c. Tính tích các phần tử chia hết cho 7 trên đường chéo chính.
d. Cho biết trong ma trận dòng nào có nhiều số lẻ nhất.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[20][20], int &n)
{
	printf("\nNhap so dong cua mang: ");
	scanf_s("%d", &n);

	printf("Nhap so cot cua mang: ");
	scanf_s("%d", &n);

	// Khởi tạo số ngẫu nhiên
	srand(time(NULL));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 100;
}

void xuatMang(int a[20][20], int n)
{
	printf("\n----------------------------------------------------------------\n");
	// Xuất từng phần tử cho mảng từ chỉ số 0 đến n-1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}

int maxChinhTren(int a[20][20], int n)
{
	int m = a[0][n - 1];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i < j && a[i][j] > m)
				m = a[i][j];
	return m;
}

int kiemTraMaTran0(int a[20][20], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] != 0)
				return 0;
	return 1;
}

int tinhTichPTChiaHet7TrenDCC(int a[20][20], int n)
{
	int tich = 1;

	for (int i = 0; i < n; i++)
		if (a[i][i] % 7 == 0)
			tich = tich * a[i][i];
	return tich;
}

int demLeDongK(int a[20][20], int n, int k)
{
	int dem = 0;

	for (int j = 0; j < n; j++)
		if (a[k][j] % 2 != 0)
			dem++;
	return dem;
}

int maxLe(int a[20][20], int n)
{
	int m = 0;

	for (int i = 0; i < n; i++)
	{
		int leDongi = demLeDongK(a, n, i);
		int leDongm = demLeDongK(a, n, m);

		if (leDongi > leDongm)
			m = i;
	}
	return m;
}

int main()
{
	int a[20][20], n;

	nhapMang(a, n);
	xuatMang(a, n);

	printf("\n----------------------------------------------------------------\n");
	printf("\nTIM PHAN TU NHO NHAT CUA TAM GIAC CHINH TREN\n");
	printf("%d", maxChinhTren(a, n));

	printf("\n----------------------------------------------------------------\n");
	printf("\nKIEM TRA XEM MA TRAN CO PHAI MA TRAN 0 HAY KHONG\n");

	int kq = kiemTraMaTran0(a, n);

	if (kq == 1)
		printf("Co!");
	else
		printf("Khong!");

	printf("\n----------------------------------------------------------------\n");
	printf("\nTINH TICH CAC PHAN TU CHIA HET CHO 7 TREN DUONG CHEO CHINH\n");
	printf("%d", tinhTichPTChiaHet7TrenDCC(a, n));

	printf("\n----------------------------------------------------------------\n");
	printf("\nCHO BIET MA TRAN DONG NAO CO NHIEU SO LE NHAT\n");
	printf("%d", maxLe(a, n));

	return 0;
}