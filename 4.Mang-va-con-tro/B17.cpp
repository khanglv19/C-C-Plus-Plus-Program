// Chèn một phần tử x vô vị trí thứ i của mảng a.

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

// Hàm chèn phần tử x vào vị trí i trong mảng
void chenPhanTu(int **arr, int *n, int x, int i)
{
    if (i < 0 || i > *n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }

    int *temp = (int *)realloc(*arr, (*n + 1) * sizeof(int));

    if (temp == NULL)
    {
        printf("Khong the cap phat them bo nho!\n");
        return;
    }

    *arr = temp;

    for (int j = *n; j > i; j--)
    {
        (*arr)[j] = (*arr)[j - 1];
    }

    (*arr)[i] = x;
    (*n)++;
}

int main()
{
    int n, x, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    nhapMang(arr, n);

    printf("Nhap gia tri can chen: ");
    scanf("%d", &x);

    printf("Nhap vi tri can chen (bat dau tu 0): ");
    scanf("%d", &i);

    chenPhanTu(&arr, &n, x, i);

    printf("Mang sau khi chen phan tu: ");

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

    free(arr);
    return 0;
}