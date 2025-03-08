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
i. Sắp xếp danh sách giảm dần theo số lượng. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_BOOKS 100

typedef struct
{
	char maSach[11];
	char tenSach[31];
	float giaBan;
	int soLuong;
} SACH;

// Hàm đọc dữ liệu từ file
int docFileSach(const char *filename, SACH books[], int *n)
{
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Khong the mo file %s!\n", filename);
		return 0;
	}

	*n = 0;

	while (fscanf(file, "%10s %30[^\n] %f %d\n", books[*n].maSach, books[*n].tenSach, &books[*n].giaBan, &books[*n].soLuong) == 4)
	{
		(*n)++;
	}

	fclose(file);
	return 1;
}

// Hàm xuất thông tin sách
void xuatSach(SACH books[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Ma sach: %s, Ten sach: %s, Gia ban: %.2f, So luong: %d\n", books[i].maSach, books[i].tenSach, books[i].giaBan, books[i].soLuong);
	}
}

// Sắp xếp tăng dần theo tên sách
void sapXepTheoTen(SACH books[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(books[i].tenSach, books[j].tenSach) > 0)
			{
				SACH temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}
	}
}

// Xuất sách có số lượng > 10
void xuatSachSoLuongLonHon10(SACH books[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (books[i].soLuong > 10)
		{
			printf("%s\n", books[i].tenSach);
		}
	}
}

// Xuất sách có mã bắt đầu bằng SA
void xuatSachMaBatDauSA(SACH books[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strncmp(books[i].maSach, "SA", 2) == 0)
		{
			printf("%s\n", books[i].tenSach);
		}
	}
}

// Xuất sách có tên chứa chuỗi "Lap trinh"
void xuatSachCoTenLapTrinh(SACH books[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strstr(books[i].tenSach, "Lap trinh") != NULL)
		{
			printf("%s\n", books[i].tenSach);
		}
	}
}

// Xóa sách có số lượng bằng 0
int xoaSachSoLuong0(SACH books[], int *n)
{
	int count = 0;
	for (int i = 0; i < *n; i++)
	{
		if (books[i].soLuong == 0)
		{
			for (int j = i; j < *n - 1; j++)
			{
				books[j] = books[j + 1];
			}
			(*n)--;
			i--;
			count++;
		}
	}
	return count;
}

// Sắp xếp giảm dần theo số lượng
void sapXepGiamTheoSoLuong(SACH books[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (books[i].soLuong < books[j].soLuong)
			{
				SACH temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}
	}
}

int main()
{
	SACH books[MAX_BOOKS];
	int n;

	if (!docFileSach("IP.txt", books, &n))
	{
		return 1;
	}

	printf("Danh sach sach ban dau:\n");
	xuatSach(books, n);

	sapXepTheoTen(books, n);
	printf("\nDanh sach sau khi sap xep theo ten:\n");
	xuatSach(books, n);

	printf("\nSach co so luong > 10:\n");
	xuatSachSoLuongLonHon10(books, n);

	printf("\nSach co ma bat dau la 'SA':\n");
	xuatSachMaBatDauSA(books, n);

	printf("\nSach co ten chua 'Lap trinh':\n");
	xuatSachCoTenLapTrinh(books, n);

	xoaSachSoLuong0(books, &n);
	printf("\nDanh sach sau khi xoa sach co so luong 0:\n");
	xuatSach(books, n);

	sapXepGiamTheoSoLuong(books, n);
	printf("\nDanh sach sau khi sap xep giam dan theo so luong:\n");
	xuatSach(books, n);

	return 0;
}