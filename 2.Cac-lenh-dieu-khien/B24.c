// Viết chương trình hiển thị tất cả các số lẻ nhỏ hơn n. Trong đó, n nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}