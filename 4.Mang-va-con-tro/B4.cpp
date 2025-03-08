// Nhập mảng a gồm n phần tử sao cho các số chẵn và lẻ xen kẽ nhau

#include <stdio.h>
#include <stdlib.h>

void nhapMangXenKe(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // Vị trí chẵn -> nhập số chẵn
            do
            {
                printf("Nhap so chan cho phan tu a[%d]: ", i);
                scanf("%d", &a[i]);
            } while (a[i] % 2 != 0);
        }
        else
        {
            // Vị trí lẻ -> nhập số lẻ
            do
            {
                printf("Nhap so le cho phan tu a[%d]: ", i);
                scanf("%d", &a[i]);
            } while (a[i] % 2 == 0);
        }
    }
}

void xuatMang(int *a, int n)
{
    printf("Mang da nhap: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    do
    {
        printf("Nhap so phan tu cua mang (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int *a = (int *)malloc(n * sizeof(int)); // cấp phát động bằng malloc để tránh lỗi kích thước không cố định
    if (a == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    nhapMangXenKe(a, n);
    xuatMang(a, n);

    free(a);
    return 0;
}