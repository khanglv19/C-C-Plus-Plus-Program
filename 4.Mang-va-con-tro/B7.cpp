// Viết hàm xuất các phần tử ở vị trí chẵn (hoặc lẻ) của mảng số nguyên n phần tử.

#include <stdio.h>
#include <stdlib.h>

void xuatViTriChan(int *a, int n)
{
    printf("Cac phan tu o vi tri chan: ");

    for (int i = 0; i < n; i += 2)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void xuatViTriLe(int *a, int n)
{
    printf("Cac phan tu o vi tri le: ");

    for (int i = 1; i < n; i += 2)
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

    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    xuatViTriChan(a, n);
    xuatViTriLe(a, n);

    free(a);
    return 0;
}