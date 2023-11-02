﻿// Nhập n >= 1. Tính S(n) = 1/2 + 2/3 + ... + n/n+1.

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
        for (int i = 1; i <= n; i++)
        {
            sum += (double)i / (i + 1);
        }

        printf("Tong S(%d) = %.4f\n", n, sum);
    }

    return 0;
    getch();
}
