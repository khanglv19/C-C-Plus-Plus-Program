/* Thông tin của một hội thi gồm có:
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
	- Sắp xếp các hội thi trong mảng giảm dần theo giá vé. Nếu 2 hội thi cùng giá vé thì sắp xếp tăng theo số chỗ. */

#include <stdio.h>
#include <string.h>

#define MAX_HOITHI 100

typedef struct
{
	char maHoiThi[11];
	char tenHoiThi[31];
	char tenDaoDien[31];
	int namToChuc;
	float giaVe;
	int soCho;
} HoiThi;

void nhapHoiThi(HoiThi *ht)
{
	printf("Nhap ma hoi thi: ");
	scanf("%s", ht->maHoiThi);
	getchar();

	printf("Nhap ten hoi thi: ");
	fgets(ht->tenHoiThi, sizeof(ht->tenHoiThi), stdin);
	ht->tenHoiThi[strcspn(ht->tenHoiThi, "\n")] = 0;

	printf("Nhap ten dao dien: ");
	fgets(ht->tenDaoDien, sizeof(ht->tenDaoDien), stdin);
	ht->tenDaoDien[strcspn(ht->tenDaoDien, "\n")] = 0;

	printf("Nhap nam to chuc: ");
	scanf("%d", &ht->namToChuc);

	printf("Nhap gia ve: ");
	scanf("%f", &ht->giaVe);

	printf("Nhap so cho: ");
	scanf("%d", &ht->soCho);
}

int laHoiThiLeHoang2019(HoiThi ht)
{
	return (strcmp(ht.tenDaoDien, "Le Hoang") == 0 && ht.namToChuc == 2019);
}

float tinhTongTien(HoiThi a[], int n)
{
	float tong = 0;

	for (int i = 0; i < n; i++)
	{
		tong += a[i].giaVe * a[i].soCho;
	}
	return tong;
}

void sapXepHoiThi(HoiThi a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].giaVe < a[j].giaVe || (a[i].giaVe == a[j].giaVe && a[i].soCho > a[j].soCho))
			{
				HoiThi temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void xuatHoiThi(HoiThi ht)
{
	printf("Ma hoi thi: %s\n", ht.maHoiThi);
	printf("Ten hoi thi: %s\n", ht.tenHoiThi);
	printf("Dao dien: %s\n", ht.tenDaoDien);
	printf("Nam to chuc: %d\n", ht.namToChuc);
	printf("Gia ve: %.2f\n", ht.giaVe);
	printf("So cho: %d\n", ht.soCho);
}

int main()
{
	int n;
	HoiThi a[MAX_HOITHI];

	printf("Nhap so luong hoi thi: ");
	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
	{
		printf("\nNhap thong tin hoi thi thu %d:\n", i + 1);
		nhapHoiThi(&a[i]);
	}

	printf("\nDanh sach hoi thi:\n");
	for (int i = 0; i < n; i++)
	{
		xuatHoiThi(a[i]);
	}

	float tongTien = tinhTongTien(a, n);
	printf("\nTong tien du kien thu duoc: %.2f\n", tongTien);

	sapXepHoiThi(a, n);
	printf("\nDanh sach hoi thi sau khi sap xep:\n");
	for (int i = 0; i < n; i++)
	{
		xuatHoiThi(a[i]);
	}

	return 0;
}