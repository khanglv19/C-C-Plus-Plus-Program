/*Thông tin của một hội thi gồm có:
	- Mã hội thi là một chuỗi có tối đa 10 ký tự.
	- Tên hội thi là một chuỗi có tối đa 30 ký tự.
	- Tên đạo diễn là một chuỗi tối đa 30 ký tự.
	- Năm tổ chức là một số nguyên.
	- Giá vé là một số thực.
	- Số chỗ là một số nguyên.
a. Xây dựng cấu trúc HoiThi để lưu thông tin của một hội thi được mô tả như trên.
b. Viết hàm cho biết một hội thi đã cho có phải do "Le Hoang" đạo diễn vào năm 2019 hay không/
c. Cho a là mảng chứa thông tin của n hội thi:
	- Tính tổng số tiền dự kiến thu được của tất cả các hội thi trong mảng.
		Biết rằng số tiền thu được của mỗi hội thi bằng: giá vé * số chỗ
	- Sắp xếp các hội thi trong mảng giảm dần theo giá vé. Nếu 2 hội thi cùng giá vé thì sắp xếp tăng theo số chỗ.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct HoiThi
{
	char ma[11];
	char ten[31];
	char daoDien[31];
	int nam;
	float gia;
	int soCho;
};

void nhapHoiThi(HoiThi &ht);
void xuatHoiThi(HoiThi ht);
int kiemTraHoiThi(HoiThi ht);
float tongTien(HoiThi a[], int n);
void sapXep(HoiThi a[], int n);

int main()
{
	HoiThi ht, a[20];
	int n;

	nhapHoiThi(ht);
	xuatHoiThi(ht);

	printf("\n=====================================================\n");
	printf("\n\tKIEM TRA THONG TIN HOI THI");

	int kq = kiemTraHoiThi(ht);

	if (kq == 1)
		printf("\nThong tin trung khop!");
	else
		printf("\nThong tin khong trung khop!");

	printf("\n=====================================================\n");
	printf("\n\tTONG TIEN THU DUOC TU HOI THI");
	printf("\nTong tien du kien thu duoc: %f", tongTien(a, n));
	printf("\n=====================================================\n");
	printf("\n\tSAP XEP HOI THI");
	sapXep(a, n);
	xuatHoiThi(ht);
	_getch();
}

void nhapHoiThi(HoiThi &ht)
{
	printf("Nhap ma hoi thi: ");
	_flushall();
	gets_s(ht.ma);
	printf("Nhap ten hoi thi: ");
	_flushall();
	gets_s(ht.ten);
	printf("Nhap ten dao dien: ");
	_flushall();
	gets_s(ht.daoDien);
	printf("Nhap nam to chuc: ");
	scanf_s("%d", &ht.nam);
	printf("Nhap gia ve: ");
	scanf_s("%f", &ht.gia);
	printf("Nhap so cho: ");
	scanf_s("%d", &ht.soCho);
}

void xuatHoiThi(HoiThi ht)
{
	printf("\n\t%s\n\t%s\n\t%s\n\t%d\n\t%f\n\t%d", ht.ma, ht.ten, ht.daoDien, ht.nam, ht.gia, ht.soCho);
}

int kiemTraHoiThi(HoiThi ht)
{
	if (strcmp(ht.daoDien, "Le Hoang") == 0 && ht.nam == 2019)
		return 1;
	else
		return 0;
}

float tongTien(HoiThi a[], int n)
{
	float tong = 0;

	for (int i = 0; i < n; i++)
		tong = tong + a[i].gia * a[i].soCho;
	return tong;
}
void swap(HoiThi &x, HoiThi &y)
{
	HoiThi temp = x;
	x = y;
	y = temp;
}

void sapXep(HoiThi a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if ((a[i].gia < a[j].gia) || (a[i].gia == a[j].gia && a[i].soCho < a[j].soCho))
				swap(a[i], a[j]);
}