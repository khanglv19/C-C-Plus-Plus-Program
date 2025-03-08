/* Nhập vào chức vụ của một nhân viên. Tính tiền phụ cấp của nhân viên đó,
biết rằng có các chức vụ "Giám đốc", "Trưởng phòng", "Tổ trưởng" và "Nhân viên" với phụ cấp tương ứng là 1000, 600, 400 và 0. */

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct
{
	char maSo[10];
	char hoTen[50];
	float luong;
	char chucVu[20];
} NhanVien;

int tinhPhuCap(char chucVu[])
{
	if (strcmp(chucVu, "Giam doc") == 0)
		return 1000;
	if (strcmp(chucVu, "Truong phong") == 0)
		return 600;
	if (strcmp(chucVu, "To truong") == 0)
		return 400;
	if (strcmp(chucVu, "Nhan vien") == 0)
		return 0;
	return -1; // Chức vụ không hợp lệ
}

void nhapNhanVien(NhanVien *nv)
{
	printf("Nhap ma so: ");
	scanf("%s", nv->maSo);
	getchar();

	printf("Nhap ho ten: ");
	fgets(nv->hoTen, sizeof(nv->hoTen), stdin);
	nv->hoTen[strcspn(nv->hoTen, "\n")] = 0;

	printf("Nhap luong: ");
	scanf("%f", &nv->luong);
	getchar();

	printf("Nhap chuc vu (Giam doc/Truong phong/To truong/Nhan vien): ");
	fgets(nv->chucVu, sizeof(nv->chucVu), stdin);
	nv->chucVu[strcspn(nv->chucVu, "\n")] = 0;

	int phuCap = tinhPhuCap(nv->chucVu);
	if (phuCap == -1)
	{
		printf("Chuc vu khong hop le!\n");
	}
	else
	{
		printf("Phu cap cho chuc vu %s: %d\n", nv->chucVu, phuCap);
	}
}

int main()
{
	NhanVien nv;
	nhapNhanVien(&nv);

	return 0;
}