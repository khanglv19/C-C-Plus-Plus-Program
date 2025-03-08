// Nhập n >= 1. Tính S(n) = 1 + 1/3 + 1/5 + ... + 1/2n+1.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Nhap n (n >= 1): ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Vui long nhap n >= 1.\n");
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            sum += 1.0 / (2 * i + 1);
        }

        printf("Tong S(%d) = %.4f\n", n, sum);
    }

    return 0;
}
