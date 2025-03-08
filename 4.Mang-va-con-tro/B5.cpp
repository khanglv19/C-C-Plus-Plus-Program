// Viết hàm tìm phần tử lớn nhất trong mảng số nguyên n phần tử.
// Viết hàm tìm phần tử nhỏ nhất trong mảng số nguyên n phần tử.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Hàm nhập mảng
void nhapMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm tìm phần tử lớn nhất trong mảng
int timMax(int *a, int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

// Hàm tìm phần tử nhỏ nhất trong mảng
int timMin(int *a, int n)
{
    int min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
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

    nhapMang(a, n);

    int max = timMax(a, n);
    int min = timMin(a, n);

    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    free(a);
    return 0;
}