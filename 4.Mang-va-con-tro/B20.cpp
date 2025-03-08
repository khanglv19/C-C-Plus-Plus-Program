// Tìm số nguyên tố lớn nhất trong mảng a.
// Tìm số có bình phương nhỏ nhất trong mảng a.
// Tìm số có số lần xuất hiện nhiều nhất trong mảng a.

#include <stdio.h>
#include <stdbool.h>

// Hàm nhập mảng
void inputArray(int a[], int *n)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm kiểm tra số nguyên tố
bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Hàm tìm số nguyên tố lớn nhất trong mảng
int findMaxPrime(int a[], int n)
{
    int maxPrime = -1;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]) && a[i] > maxPrime)
        {
            maxPrime = a[i];
        }
    }
    return maxPrime;
}

// Hàm tìm số có bình phương nhỏ nhất trong mảng
int findMinSquare(int a[], int n)
{
    int minSquare = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] * a[i] < minSquare * minSquare)
        {
            minSquare = a[i];
        }
    }
    return minSquare;
}

// Hàm tìm số có số lần xuất hiện nhiều nhất
int findMostFrequent(int a[], int n)
{
    int maxCount = 0, mostFrequent = a[0];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequent = a[i];
        }
    }
    return mostFrequent;
}

int main()
{
    int a[100];
    int n;

    inputArray(a, &n);

    int maxPrime = findMaxPrime(a, n);
    int minSquare = findMinSquare(a, n);
    int mostFrequent = findMostFrequent(a, n);

    if (maxPrime != -1)
    {
        printf("So nguyen to lon nhat trong mang la: %d\n", maxPrime);
    }
    else
    {
        printf("Khong co so nguyen to trong mang.\n");
    }

    printf("So co binh phuong nho nhat trong mang la: %d\n", minSquare);
    printf("So xuat hien nhieu nhat trong mang la: %d\n", mostFrequent);

    return 0;
}