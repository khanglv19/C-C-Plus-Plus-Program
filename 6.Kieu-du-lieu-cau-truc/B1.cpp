/* Một cuốn sách gồm các thông tin sau:
	Mã sách là chuỗi có 10 ký tự
	Tên sách là chuỗi tối đa 30 ký tự
	Giá bán là một số thực
	Số lượng là một số nguyên
Hãy viết chương trình thực hiện các yêu cầu sau:
a. Xây dựng cấu trúc SACH mô tả cuốn sách
b. Cho một mảng có n cuốn sách. Tạo file IP.txt chứa thông tin n cuốn sách. Đọc sữ liệu từ file IP.txt
c. Xuất thông tin n cuốn sách.
d. Viết hàm sắp xếp mảng tăng dần theo tên sách.
e. Viết hàm xuất các sách có số lượng > 10.
f. Xuất các sách có mã số bắt đầu là <<SA>>.
g. Xuất các sách có tên chứa chuỗi <<Lap trinh>>.
h. Xóa các sách có số lượng 0.
i. Sắp xếp danh sách giảm dần theo số lượng.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>

using namespace std;

struct SACH
{
	char ma[11];
	char ten[31];
	float gia;
	int soLuong;
};

void nhapSachTuBanPhim(SACH &s);
void nhapSachTuFile(SACH &s);
void xuat1Sach(SACH s);
void nhapMang(SACH a[], int &n);
void xuatMang(SACH a[], int n);
void swap(SACH &x, SACH &y);
void sapXepTangTheoTen(SACH a[], int n);
void xuatSachCoSLLonHon10(SACH a[], int n);
void xuatSachCoMaBatDau_SA(SACH a[], int n);
void xuatSachTenLapTrinh(SACH a[], int n);
void xoatPhanTu(SACH a[], int &n, int k);
void xoaSachCoSLKhong(SACH a[], int &n);
void sapXepGiamTheoSL(SACH a[], int n);

void main()
{
	SACH s, a[100];
	int n;
	//nhapSachTuBanPhim(s);
	nhapSachTuFile(s);
	printf("\n================================================================\n");
	//xuat1Sach(s);
	printf("\n================================================================\n");
	nhapMang(a, n);
	printf("\n================================================================\n");
	sapXepTangTheoTen(a, n);
	printf("\n================================================================\n");
	xuatSachCoSLLonHon10(a, n);
	printf("\n================================================================\n");
	xuatSachCoMaBatDau_SA(a, n);
	printf("\n================================================================\n");
	xuatSachTenLapTrinh(a, n);
	printf("\n================================================================\n");
	xoaSachCoSLKhong(a, n);
	printf("\n================================================================\n");
	sapXepGiamTheoSL(a, n);
	_getch();
}

void nhapSachTuBanPhim(SACH &s)
{
	printf("\nNhap ma sach: ");
	_flushall();
	gets_s(s.ma);
	printf("\nNhap ten sach: ");
	_flushall();
	gets_s(s.ten);
	printf("\nNhap gia ban: ");
	scanf_s("%f", &s.gia);
	printf("\nNhap so luong: ");
	scanf_s("%d", &s.soLuong);
}

void nhapSachTuFile(SACH &s)
{
	int n;
	ifstream f;
	f.open("D:\\C_C-Plus-Plus_Program\\Sach.txt", ios::in);
	//string data;
	
	f >> n;
	for (int i = 0; i < n; i++)
	{
		f >> s.ma;
		f >> s.ten;
		f >> s.gia;
		f >> s.soLuong;
	}
	f.close();
	for (int i = 0; i < n; i++)
		printf("\n\t%10s\t%30s\t%7.2f\t%5d", s.ma, s.ten, s.gia, s.soLuong);

}

void xuat1Sach(SACH s)
{
	printf("\n\t%10s\t%30s\t%7.2f\t%5d", s.ma, s.ten, s.gia, s.soLuong);
}

void nhapMang(SACH a[], int &n)
{
	do
	{
		printf("\nNhap n: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		printf("\nVui long nhap cuon sach thu %d: ", &n, i);
		//nhapSachTuBanPhim(a[i]);
		nhapSachTuFile(a[i]);
	}
}

void xuatMang(SACH a[], int n)
{
	for (int i = 0; i < n; i++)
		xuat1Sach(a[i]);
}

void swap(SACH &x, SACH &y)
{
	SACH temp = x;
	x = y;
	y = temp;
}

void sapXepTangTheoTen(SACH a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (strcmp(a[i].ten, a[j].ten)>0)
				swap(a[i], a[j]);
}

void xuatSachCoSLLonHon10(SACH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].soLuong>10)
			xuat1Sach(a[i]);
}

void xuatSachCoMaBatDau_SA(SACH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].ma[0] == 'S'&&a[i].ma[1] == 'A')
			xuat1Sach(a[i]);
}

void xuatSachTenLapTrinh(SACH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (strstr(a[i].ten, "Lap trinh") != NULL)
			xuat1Sach(a[i]);
}

void xoatPhanTu(SACH a[], int &n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}

void xoaSachCoSLKhong(SACH a[], int &n)
{
	for (int i = 0; i < n;i++)
		if (a[i].soLuong==0)
		{
			xoatPhanTu(a, n, i);
			i--;
		}
}

void sapXepGiamTheoSL(SACH a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].soLuong < a[j].soLuong)
				swap(a[i], a[j]);
}