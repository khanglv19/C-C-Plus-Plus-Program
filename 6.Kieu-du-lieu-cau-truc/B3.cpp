/* Một phân số gồm hai thông tin, tử số và mẫu số (khác 0) đều là số nguyên.
Hãy viết chương trình thực hiện các yêu cầu sau, kết quả mỗi yêu cầu cần xuất ra màn hình và ghi ra file:
a. Xây dựng cấu trúc PHANSO mô phân số.
b. Cho một mảng có n phân số. Tạo file IP.txt chứa thông tin n phân số. Đọc dữ liệu từ file IP.txt.
	Nếu phân số nào có mẫu = 0 thì loại bỏ khỏi danh sách.
c. Xuất thông tin n phân số và số lượng phần tử.
d. Xuất dãy phân số sau khi rút gọn.
e. Viết hàm sắp xếp dãy phân số giảm dần.
f. Tính tổng các phân số.
g. Tìm phân số max/min.
h. Đếm phân số > 1.
i. Xuất các phân số có giá trị nguyên (nghĩa là tử chia hết cho mẫu).
j. Quy đồng các phân số. */

#include <stdio.h>
#include <stdlib.h>

#define MAX_PS 100

typedef struct
{
	int tu;
	int mau;
} PHANSO;

int UCLN(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void rutGonPhanSo(PHANSO *ps)
{
	int ucln = UCLN(abs(ps->tu), abs(ps->mau));
	ps->tu /= ucln;
	ps->mau /= ucln;
}

void docFilePhanSo(const char *filename, PHANSO ps[], int *n)
{
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Khong the mo file %s!\n", filename);
		return;
	}

	*n = 0;

	while (fscanf(file, "%d/%d", &ps[*n].tu, &ps[*n].mau) == 2)
	{
		if (ps[*n].mau != 0)
		{
			(*n)++;
		}
	}

	fclose(file);
}

void xuatDanhSachPhanSo(PHANSO ps[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d/%d\n", ps[i].tu, ps[i].mau);
	}
}

void sapXepGiamDan(PHANSO ps[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((float)ps[i].tu / ps[i].mau < (float)ps[j].tu / ps[j].mau)
			{
				PHANSO temp = ps[i];
				ps[i] = ps[j];
				ps[j] = temp;
			}
		}
	}
}

PHANSO tongPhanSo(PHANSO ps[], int n)
{
	PHANSO tong = {0, 1};
	for (int i = 0; i < n; i++)
	{
		tong.tu = tong.tu * ps[i].mau + ps[i].tu * tong.mau;
		tong.mau *= ps[i].mau;
		rutGonPhanSo(&tong);
	}
	return tong;
}

void timMaxMin(PHANSO ps[], int n, PHANSO *max, PHANSO *min)
{
	*max = *min = ps[0];
	for (int i = 1; i < n; i++)
	{
		if ((float)ps[i].tu / ps[i].mau > (float)max->tu / max->mau)
		{
			*max = ps[i];
		}
		if ((float)ps[i].tu / ps[i].mau < (float)min->tu / min->mau)
		{
			*min = ps[i];
		}
	}
}

int demPhanSoLonHon1(PHANSO ps[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(ps[i].tu) >= abs(ps[i].mau))
		{
			count++;
		}
	}
	return count;
}

void xuatPhanSoNguyen(PHANSO ps[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ps[i].tu % ps[i].mau == 0)
		{
			printf("%d\n", ps[i].tu / ps[i].mau);
		}
	}
}

int main()
{
	PHANSO ps[MAX_PS];
	int n;

	docFilePhanSo("IP.txt", ps, &n);

	printf("Danh sach phan so:\n");
	xuatDanhSachPhanSo(ps, n);

	for (int i = 0; i < n; i++)
	{
		rutGonPhanSo(&ps[i]);
	}

	printf("\nDanh sach phan so rut gon:\n");
	xuatDanhSachPhanSo(ps, n);

	sapXepGiamDan(ps, n);
	printf("\nDanh sach phan so sau khi sap xep giam dan:\n");
	xuatDanhSachPhanSo(ps, n);

	PHANSO tong = tongPhanSo(ps, n);
	printf("\nTong cac phan so: %d/%d\n", tong.tu, tong.mau);

	PHANSO max, min;
	timMaxMin(ps, n, &max, &min);
	printf("\nPhan so max: %d/%d, Phan so min: %d/%d\n", max.tu, max.mau, min.tu, min.mau);

	printf("\nSo phan so lon hon 1: %d\n", demPhanSoLonHon1(ps, n));

	printf("\nPhan so co gia tri nguyen:\n");
	xuatPhanSoNguyen(ps, n);

	return 0;
}