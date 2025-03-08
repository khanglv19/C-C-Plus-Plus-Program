// Xóa phần tử thứ i trong mảng a có n phần tử.

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

// Hàm xoá phần tử thứ i trong mảng
void xoaPhanTu(int arr[], int *n, int i)
{
    if (i < 0 || i >= *n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int j = i; j < *n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    (*n)--;
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

    int i;

    printf("Nhap vi tri can xoa (bat dau tu 0): ");
    scanf("%d", &i);

    xoaPhanTu(arr, &n, i);

    printf("Mang sau khi xoa phan tu: ");

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

    free(arr);
    return 0;
}