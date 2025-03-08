// Tìm số âm lớn nhất / số dương nhỏ nhất trên mảng số nguyên n phần tử

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int timSoAmLonNhat(int *a, int n)
{
    int maxAm = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && a[i] > maxAm)
        {
            maxAm = a[i];
        }
    }
    return maxAm;
}

int timSoDuongNhoNhat(int *a, int n)
{
    int minDuong = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] < minDuong)
        {
            minDuong = a[i];
        }
    }
    return minDuong;
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

    int maxAm = timSoAmLonNhat(a, n);
    int minDuong = timSoDuongNhoNhat(a, n);

    if (maxAm != INT_MIN)
        printf("So am lon nhat trong mang: %d\n", maxAm);
    else
        printf("Khong co so am trong mang.\n");

    if (minDuong != INT_MAX)
        printf("So duong nho nhat trong mang: %d\n", minDuong);
    else
        printf("Khong co so duong trong mang.\n");

    free(a);
    return 0;
}