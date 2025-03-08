// Viết chương trình nhập một mảng số nguyên. Tính tổng các vị trí chẵn và tổng các vị trí lẻ.

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

// Hàm tính tổng các phần tử ở vị trí chẵn và lẻ
void tinhTongChanLe(int arr[], int n, int *tongChan, int *tongLe)
{
    *tongChan = 0;
    *tongLe = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            *tongChan += arr[i];
        }
        else
        {
            *tongLe += arr[i];
        }
    }
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

    int tongChan, tongLe;

    tinhTongChanLe(arr, n, &tongChan, &tongLe);

    printf("Tong cac phan tu o vi tri chan: %d\n", tongChan);
    printf("Tong cac phan tu o vi tri le: %d\n", tongLe);

    free(arr);
    return 0;
}