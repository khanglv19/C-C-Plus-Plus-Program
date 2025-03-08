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
h. Đếm số lượng sản phẩm của từng hãng. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PHONE 100

typedef struct
{
	char maDienThoai[11];
	char tenDienThoai[21];
	char nhaSanXuat[21];
	float giaBan;
	int soLuong;
} DIENTHOAI;

// Đọc dữ liệu từ file
int docFileDienThoai(const char *filename, DIENTHOAI phones[], int *n)
{
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Khong the mo file %s!\n", filename);
		return 0;
	}

	*n = 0;

	while (fscanf(file, "%10s %20s %20s %f %d\n", phones[*n].maDienThoai, phones[*n].tenDienThoai,
				  phones[*n].nhaSanXuat, &phones[*n].giaBan, &phones[*n].soLuong) == 5)
	{
		(*n)++;
	}

	fclose(file);
	return 1;
}

// Xuất thông tin điện thoại
void xuatDienThoai(DIENTHOAI phones[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Ma: %s, Ten: %s, Hang: %s, Gia: %.2f, So luong: %d\n",
			   phones[i].maDienThoai, phones[i].tenDienThoai, phones[i].nhaSanXuat,
			   phones[i].giaBan, phones[i].soLuong);
	}
}

// Sắp xếp giảm dần theo giá bán
void sapXepGiamTheoGia(DIENTHOAI phones[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (phones[i].giaBan < phones[j].giaBan)
			{
				DIENTHOAI temp = phones[i];
				phones[i] = phones[j];
				phones[j] = temp;
			}
		}
	}
}

// Xuất điện thoại có số lượng < 10
void xuatSoLuongNhoHon10(DIENTHOAI phones[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (phones[i].soLuong < 10)
		{
			printf("%s\n", phones[i].tenDienThoai);
		}
	}
}

// Xuất điện thoại có mã bắt đầu bằng "IP"
void xuatMaBatDauIP(DIENTHOAI phones[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strncmp(phones[i].maDienThoai, "IP", 2) == 0)
		{
			printf("%s\n", phones[i].tenDienThoai);
		}
	}
}

// Xuất điện thoại của hãng SAMSUNG
void xuatDienThoaiSamsung(DIENTHOAI phones[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(phones[i].nhaSanXuat, "SAMSUNG") == 0)
		{
			printf("%s\n", phones[i].tenDienThoai);
		}
	}
}

// Đếm số lượng sản phẩm theo hãng
void demSoLuongTheoHang(DIENTHOAI phones[], int n)
{
	char hangDaDem[MAX_PHONE][21];
	int count[MAX_PHONE] = {0};
	int soHang = 0;

	for (int i = 0; i < n; i++)
	{
		int found = 0;
		for (int j = 0; j < soHang; j++)
		{
			if (strcmp(phones[i].nhaSanXuat, hangDaDem[j]) == 0)
			{
				count[j] += phones[i].soLuong;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			strcpy(hangDaDem[soHang], phones[i].nhaSanXuat);
			count[soHang] = phones[i].soLuong;
			soHang++;
		}
	}

	for (int i = 0; i < soHang; i++)
	{
		printf("Hang: %s - Tong so luong: %d\n", hangDaDem[i], count[i]);
	}
}

int main()
{
	DIENTHOAI phones[MAX_PHONE];
	int n;

	if (!docFileDienThoai("IP.txt", phones, &n))
	{
		return 1;
	}

	printf("Danh sach dien thoai:\n");
	xuatDienThoai(phones, n);

	sapXepGiamTheoGia(phones, n);
	printf("\nDanh sach sau khi sap xep giam dan theo gia ban:\n");
	xuatDienThoai(phones, n);

	printf("\nDien thoai co so luong < 10:\n");
	xuatSoLuongNhoHon10(phones, n);

	printf("\nDien thoai co ma bat dau la 'IP':\n");
	xuatMaBatDauIP(phones, n);

	printf("\nDien thoai cua hang SAMSUNG:\n");
	xuatDienThoaiSamsung(phones, n);

	printf("\nSo luong san pham theo tung hang:\n");
	demSoLuongTheoHang(phones, n);

	return 0;
}