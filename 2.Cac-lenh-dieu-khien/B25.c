// Viết chương trình tính tổng các số chẵn nhỏ hơn n. Trong đó, n nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, s = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            s = s + i;
    }

    printf("Tong cac so chan nho hon n: %d", s);
    getch();
}