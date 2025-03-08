/* Cho trước mảng một chiều a chứa n số nguyên.
a. Sắp xếp mảng sao cho các phần tử dương tăng dần, các phần tử còn lại giữ nguyên vị trí.
b. Tìm phần tử lớn nhất của mảng.
c. Tìm vị trí của phần tử chẵn lớn nhất trong mảng. Nếu mảng không có phần tử chẵn nào thì trả về vị trí -1
d. Xóa tất cả các phần tử lớn hơn 10 trong mảng. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 20

void nhapMang(int a[], int &n)
{
	printf("\nNhap so luong phan tu cua mang: ");
	scanf_s("%d", &n);

	// Khởi tạo số ngẫu nhiên
	srand(time(NULL));

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
			a[i] = rand() % 100;
	}
}

void xuatMang(int a[], int n)
{
	// Xuất từng phần tử cho mảng từ chỉ số 0 đến n-1
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
}

void swap(int &x, int &y)
{
	int temp = x;

	x = y;
	y = temp;
}

void sapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j] && a[i] > 0 && a[j] > 0)
				swap(a[i], a[j]);
}

int timPhanTuLonNhat(int a[], int n)
{
	int m = a[0];

	for (int i = 0; i < n; i++)
		if (a[i] > m)
			m = a[i];
	return m;
}

int timViTriChanLonNhat(int a[], int n)
{
	// Tìm phần tử đầu tiên thỏa đk
	int vt = -1;

	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		{
			vt = i;
			break;
		}

	if (vt == -1)
		return -1;

	// Tìm vị trí lớn nhất
	int vtMax = vt;

	for (int i = vt + 1; i < n; i++)
		if (a[i] % 2 == 0 && a[i] > a[vtMax])
			vtMax = i;
	return vtMax;
}

void xoatPT(int a[], int &n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}

void xoatPTLonHon10(int a[], int &n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 10)
		{
			xoatPT(a, n, i);
			i--;
		}
}

int main()
{
	int a[MAXSIZE], n;

	nhapMang(a, n);
	xuatMang(a, n);

	printf("\n========================================================\n");
	printf("\n\tSAP XEP CAC PHAN TU DUONG TRONG MANG TANG DAN\n");
	sapXep(a, n);
	xuatMang(a, n);

	printf("\n========================================================\n");
	printf("\n\tTIM PHAN TU LON NHAT CUA MANG\n");
	printf("Phan tu lon nhat la: %d", timPhanTuLonNhat(a, n));

	printf("\n========================================================\n");
	printf("\n\tTIM VI TRI CHAN LON NHAT TRONG MANG\n");
	printf("Vi tri thu: %d", timViTriChanLonNhat(a, n));

	printf("\n========================================================\n");
	printf("\n\tXOA TAT CA CAC PHAN TU LON HON 10 TRONG MANG\n");

	xoatPTLonHon10(a, n);
	xuatMang(a, n);

	return 0;
}