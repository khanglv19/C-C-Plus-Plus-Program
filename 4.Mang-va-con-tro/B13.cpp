// Viết hàm tính tổng các phần tử của mảng gồm n phần tử.

#include <stdio.h>

// Hàm nhập mảng
void nhapMang(int a[], int *n)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm xuất mảng
void xuatMang(int a[], int n)
{
    printf("Mang da nhap: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Hàm tính tổng các phần tử của mảng
int tinhTong(int a[], int n)
{
    int tong = 0;

    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    return tong;
}

int main()
{
    int a[100], n;

    nhapMang(a, &n);
    xuatMang(a, n);

    // In tổng các phần tử
    printf("Tong cac phan tu cua mang: %d\n", tinhTong(a, n));

    return 0;
}