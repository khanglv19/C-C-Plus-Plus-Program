// Viết chương trình in ra các số là bội số của 5 nhỏ hơn n, trong đó n nhập từ bàn phím.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Boi so cua 5 la: ");
    for (int i = 0; i < n; i++)
        if (i % 5 == 0)
            printf("%d\t", i);

    return 0;
}