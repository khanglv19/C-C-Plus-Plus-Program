// Nhập mảng a gồm n phần tử số nguyên sao cho các số nguyên có thứ tự tăng.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do
    {
        printf("Nhap so phan tu cua mang (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu theo thu tu tang dan:\n");

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Nhap phan tu a[%d]: ", i);
            scanf("%d", &a[i]);
            if (i > 0 && a[i] < a[i - 1])
            {
                printf("Gia tri nhap khong hop le! Hay nhap so lon hon hoac bang %d.\n", a[i - 1]);
            }
        } while (i > 0 && a[i] < a[i - 1]);
    }

    printf("Mang da nhap (tang dan): ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}