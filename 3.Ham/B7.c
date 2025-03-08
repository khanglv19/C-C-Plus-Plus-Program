// Đếm số ước của số nguyên N.

#include <stdio.h>

int main()
{
    int n;

    // Nhập số nguyên N
    printf("Nhap so nguyen N: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }

    int count = 0;
    printf("Cac uoc cua %d la:\n", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\t", i);
            count++;
        }
    }

    printf("\nTong so uoc cua %d la: %d\n", n, count);
    return 0;
}