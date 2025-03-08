// Đếm các số không âm trong mảng a có n phần tử.
// Đếm các số nguyên tố trong mảng a.
// Đếm số lần xuất hiện của phần tử x trong mảng a.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Hàm đếm số phần tử không âm trong mảng
int countNonNegative(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            count++;
        }
    }
    return count;
}

int isPrime(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int countPrimes(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

// Hàm đếm số lần xuất hiện của phần tử x trong mảng
int countOccurrences(int a[], int n, int x)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = countNonNegative(a, n);
    printf("So luong phan tu khong am trong mang la: %d\n", count);

    int primeCount = countPrimes(a, n);
    printf("So luong so nguyen to trong mang la: %d\n", primeCount);

    int x;
    printf("Nhap phan tu can dem so lan xuat hien: ");
    scanf("%d", &x);

    int occurrenceCount = countOccurrences(a, n, x);
    printf("So lan xuat hien cua %d trong mang la: %d\n", x, occurrenceCount);

    free(a);
    return 0;
}