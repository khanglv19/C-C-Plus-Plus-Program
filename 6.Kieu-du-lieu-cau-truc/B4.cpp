/* Viết chương trình quản lý nhân sự cho một công ty, mỗi nhân vien trong công ty gồm các thông tin sau:
mã số (không có hai người trùng mã số), họ tên, ngày sinh, nơi sinh, địa chỉ, ngày công tác, lương.
Viết chương trình quản lý nhân viên với các thao tác sau:
a. Thêm vào một nhân viên.
b. Xem danh sách nhân viên.
c. Tìm nhân viên theo mã số.
d. Tìm một nhân viên theo tên.
e. In ra bảng lương của các nhân viên trong công ty theo thứ tự giảm dần.
f. Xóa một nhân viên. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct
{
    char maSo[10];
    char hoTen[50];
    char ngaySinh[11];
    char noiSinh[50];
    char diaChi[100];
    char ngayCongTac[11];
    float luong;
} NHANVIEN;

NHANVIEN danhSachNV[MAX_EMPLOYEES];
int soLuongNV = 0;

void themNhanVien()
{
    if (soLuongNV >= MAX_EMPLOYEES)
    {
        printf("Danh sach da day!\n");
        return;
    }

    NHANVIEN nv;
    printf("Nhap ma so: ");
    scanf("%s", nv.maSo);

    printf("Nhap ho ten: ");
    getchar();
    fgets(nv.hoTen, 50, stdin);
    nv.hoTen[strcspn(nv.hoTen, "\n")] = 0;

    printf("Nhap ngay sinh (dd/mm/yyyy): ");
    scanf("%s", nv.ngaySinh);

    printf("Nhap noi sinh: ");
    getchar();
    fgets(nv.noiSinh, 50, stdin);
    nv.noiSinh[strcspn(nv.noiSinh, "\n")] = 0;

    printf("Nhap dia chi: ");
    fgets(nv.diaChi, 100, stdin);
    nv.diaChi[strcspn(nv.diaChi, "\n")] = 0;

    printf("Nhap ngay cong tac (dd/mm/yyyy): ");
    scanf("%s", nv.ngayCongTac);

    printf("Nhap luong: ");
    scanf("%f", &nv.luong);

    danhSachNV[soLuongNV++] = nv;
}

void xemDanhSachNhanVien()
{
    for (int i = 0; i < soLuongNV; i++)
    {
        printf("\nMa: %s, Ten: %s, Ngay sinh: %s, Noi sinh: %s, Dia chi: %s, Ngay cong tac: %s, Luong: %.2f\n",
               danhSachNV[i].maSo, danhSachNV[i].hoTen, danhSachNV[i].ngaySinh,
               danhSachNV[i].noiSinh, danhSachNV[i].diaChi, danhSachNV[i].ngayCongTac,
               danhSachNV[i].luong);
    }
}

void timNhanVienTheoMa()
{
    char ma[10];

    printf("Nhap ma so can tim: ");
    scanf("%s", ma);

    for (int i = 0; i < soLuongNV; i++)
    {
        if (strcmp(danhSachNV[i].maSo, ma) == 0)
        {
            printf("Nhan vien tim thay: %s - %s\n", danhSachNV[i].maSo, danhSachNV[i].hoTen);
            return;
        }
    }
    printf("Khong tim thay nhan vien co ma so: %s\n", ma);
}

void timNhanVienTheoTen()
{
    char ten[50];

    printf("Nhap ten can tim: ");
    getchar();
    fgets(ten, 50, stdin);
    ten[strcspn(ten, "\n")] = 0;

    for (int i = 0; i < soLuongNV; i++)
    {
        if (strstr(danhSachNV[i].hoTen, ten))
        {
            printf("Nhan vien: %s - %s\n", danhSachNV[i].maSo, danhSachNV[i].hoTen);
        }
    }
}

void sapXepBangLuong()
{
    for (int i = 0; i < soLuongNV - 1; i++)
    {
        for (int j = i + 1; j < soLuongNV; j++)
        {
            if (danhSachNV[i].luong < danhSachNV[j].luong)
            {
                NHANVIEN temp = danhSachNV[i];
                danhSachNV[i] = danhSachNV[j];
                danhSachNV[j] = temp;
            }
        }
    }
    xemDanhSachNhanVien();
}

void xoaNhanVien()
{
    char ma[10];

    printf("Nhap ma so can xoa: ");
    scanf("%s", ma);

    for (int i = 0; i < soLuongNV; i++)
    {
        if (strcmp(danhSachNV[i].maSo, ma) == 0)
        {
            for (int j = i; j < soLuongNV - 1; j++)
            {
                danhSachNV[j] = danhSachNV[j + 1];
            }
            soLuongNV--;
            printf("Nhan vien da duoc xoa!\n");
            return;
        }
    }
    printf("Khong tim thay nhan vien co ma so: %s\n", ma);
}

int main()
{
    int luaChon;

    do
    {
        printf("\n1. Them nhan vien\n2. Xem danh sach\n3. Tim theo ma\n4. Tim theo ten\n5. Sap xep bang luong\n6. Xoa nhan vien\n0. Thoat\nChon: ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 1:
            themNhanVien();
            break;
        case 2:
            xemDanhSachNhanVien();
            break;
        case 3:
            timNhanVienTheoMa();
            break;
        case 4:
            timNhanVienTheoTen();
            break;
        case 5:
            sapXepBangLuong();
            break;
        case 6:
            xoaNhanVien();
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 0);

    return 0;
}