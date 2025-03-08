// Xóa tất cả các số nguyên tố trong mảng a.

#include <stdio.h>
#include <math.h>

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

void removePrimes(int a[], int n, int b[], int *m)
{
    *m = 0;
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(a[i]))
        {
            b[*m] = a[i];
            (*m)++;
        }
    }
}

int main()
{
    int a[100], b[100];
    int n, m;

    printf("Nhap so phan tu cua mang a: ");
    scanf("%d", &n);

    printf("Nhap cac phan ta cua mang a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    removePrimes(a, n, b, &m);

    printf("Mang b sau khi xoa tat ca so nguyen to tu mang a:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}