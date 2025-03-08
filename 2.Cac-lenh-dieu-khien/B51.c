// Nhập x, n. Tính T(x,n) = x^n.

#include <stdio.h>
#include <conio.h>

double power(double x, int n)
{
    double result = 1.0;

    for (int i = 0; i < n; i++)
    {
        result *= x;
    }

    return result;
}

int main()
{
    double x, result;
    int n;

    printf("Nhap gia tri cua x: ");
    scanf("%lf", &x);

    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    result = power(x, n);

    printf("T(%lf, %d) = %lf\n", x, n, result);

    return 0;
}