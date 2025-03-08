// Viết chương trình xuất ra các số có 3 chữ số sao cho các chữ số khác nhau đôi một.

#include <stdio.h>

int main()
{
    printf("Cac so co 3 chu so voi cac chu so khac nhau doi mot:\n");

    for (int i = 100; i <= 999; i++)
    {
        int a = i / 100;       // Chữ số hàng trăm
        int b = (i / 10) % 10; // Chữ số hàng chục
        int c = i % 10;        // Chữ số hàng đơn vị

        if (a != b && a != c && b != c)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}