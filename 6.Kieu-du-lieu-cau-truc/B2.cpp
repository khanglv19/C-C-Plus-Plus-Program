/* Một điện thoại gồm các thông tin sau:
	Mã điện thoại là chuỗi có 10 ký tự.
	Tên điện thoại là chuỗi tối đã 20 ký tự.
	Nhà sản xuất là chuỗi tối đa 20 ký tự.
	Giá bán là một số thực.
	Số lượng là một số nguyên.
Hãy viết chương trình thực hiện các yêu cầu sau, kết quả mỗi yêu cầu cần xuất ra màn hình và ghi ra file:
a. Xây dựng cấu trúc DIENTHOAI mô tả điện thoại.
b. Cho một mảng có n số điện thoại. Tạo file IP.txt.
c. Xuất thông tin n điện thoại.
d. Viết hàm sắp xếp mảng giảm dần theo giá bán.
e. Viết hàm xuất các điện thoại có số lượng < 10.
f. Xuất các điện thoại có mã số bắt đầu là <<IP>>.
g. Xuất các điện thoại thuộc hãng <<SAMSUNG>>.
h. Đếm số lượng sản phẩm của từng hãng.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>

using namespace std;

struct DIENTHOAI
{
	char ma[11];
	char ten[21];
	char nhaSX[21];
	float gia;
	int soLuong;
};

void nhapThongTinTuFile(DIENTHOAI &dt);
void xuat1DienThoai(DIENTHOAI dt);

void main()
{
	DIENTHOAI dt;
	nhapThongTinTuFile(dt);
	//xuat1DienThoai(dt);
	_getch();
}

void nhapThongTinTuFile(DIENTHOAI &dt)
{
	int n;
	ifstream f;
	f.open("D:\\C_C-Plus-Plus_Program\\DienThoai.txt", ios::in);
	f >> n;
	for (int i = 0; i < n; i++)
	{
		f >> dt.ma;
		f >> dt.ten;
		f >> dt.nhaSX;
		f >> dt.gia;
		f >> dt.soLuong;
	}
	f.close();
	for (int i = 0; i < n; i++)
		xuat1DienThoai(dt);
}

void xuat1DienThoai(DIENTHOAI dt)
{
	printf("\n\t%10s\t%20s\t%20s%7.2f\t%5d", dt.ma, dt.ten, dt.nhaSX, dt.gia, dt.soLuong);
}

void swap(DIENTHOAI x, DIENTHOAI y)
{
	DIENTHOAI temp = x;
	x = y;
	y = temp;
}

void sapXepGiamTheoGia(DIENTHOAI a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].gia < a[j].gia)
				swap(a[i], a[j]);
}

void xuatDienThoaiSLNhoHon10(DIENTHOAI a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].soLuong < 10)
			xuat1DienThoai(a[i]);
}

void xuatDienThoaiMaBatDauLa_IP(DIENTHOAI a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].ma[0] == 'I'&&a[i].ma[1] == 'P')
			xuat1DienThoai(a[i]);
}

void xuatDienThoaiSamSung(DIENTHOAI a[], int n)
{
	for (int i = 0; i < n; i++)
		if (strstr(a[i].nhaSX, "Sam_Sung") != NULL)
			xuat1DienThoai(a[i]);
}

int demSoLuongSanPhamTungHang(DIENTHOAI a[], int n)
{

}