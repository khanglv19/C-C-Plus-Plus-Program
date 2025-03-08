// Tìm kiếm vị trí đầu tiên của x trong mảng a có n phần tử.

#include <stdio.h>
#include <stdlib.h>

// Hàm nhập mảng số nguyên từ bàn phím
void nhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Hàm tìm vị trí đầu tiên của x trong mảng
int timViTriDauTien(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i; // Trả về vị trí đầu tiên tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

int main()
{
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    nhapMang(arr, n);

    int x;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int viTri = timViTriDauTien(arr, n, x);

    if (viTri != -1)
    {
        printf("Gia tri %d xuat hien lan dau o vi tri %d\n", x, viTri + 1);
    }
    else
    {
        printf("Gia tri %d khong ton tai trong mang\n", x);
    }

    free(arr);
    return 0;
}