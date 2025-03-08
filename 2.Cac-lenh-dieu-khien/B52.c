// Nhập x, n. Tính S(x,n) = x + x^2 + x^3 + .. + x^n.

#include <stdio.h>
#include <conio.h>
#include <math.h>

double power(double x, int n)
{
    double result = 1.0;

    for (int i = 1; i <= n; i++)
    {
        result += pow(x, i);
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

    printf("S(%lf, %d) = %lf\n", x, n, result);

    return 0;
}