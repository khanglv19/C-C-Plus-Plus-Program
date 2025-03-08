// Tính giá trị trung bình của các phần tử trong mảng số nguyên n phần tử.

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

// Hàm tính giá trị trung bình của mảng số nguyên
float tinhTrungBinh(int arr[], int n)
{
    if (n == 0)
    {
        return 0; // Tránh chia cho 0 nếu mảng rỗng
    }

    int tong = 0;

    for (int i = 0; i < n; i++)
    {
        tong += arr[i];
    }

    return (float)tong / n;
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

    float trungBinh = tinhTrungBinh(arr, n);

    printf("Gia tri trung binh cua mang la: %.2f\n", trungBinh);

    return 0;
}