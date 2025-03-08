/* Tìm m số nguyên tố cùng nhau với số n, với n, m > 0 được nhập từ bàn phím.
Biết rằng 2 số nguyên tố cùng nhau khi ước chung lớn nhất của chúng là 1. */

#include <stdio.h>

// Hàm tính UCLN
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n, m;

    // Nhập n và m từ bàn phím
    do
    {
        printf("Nhap so nguyen n (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    do
    {
        printf("Nhap so nguyen m (m > 0): ");
        scanf("%d", &m);
    } while (m <= 0);

    printf("%d so nguyen to cung nhau voi %d la:\n", m, n);

    int count = 0;

    for (int i = 1; count < m; i++)
    {
        if (gcd(i, n) == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");
    return 0;
}