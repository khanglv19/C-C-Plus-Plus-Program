// Xuất tất cả các số nguyên là bội của 7 và có đúng 2 chữ số.

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Cac so nguyen la boi cua 7 va co dung 2 chu so:\n");

    for (int i = 10; i < 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
