// Nhập n >= 0. Tính S(n) = 1/2 + 3/4 + ... + 2n+1/2n+2.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Nhap n (n >= 0): ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Vui long nhap n >= 0.\n");
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            sum += (2 * i + 1) / (2.0 * (2 * i + 2));
        }

        printf("Tong S(%d) = %.4f\n", n, sum);
    }

    return 0;
    getch();
}
