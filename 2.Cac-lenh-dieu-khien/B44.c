// Xuất tất cả các số nguyên có đúng 3 chữ số và tổng các chữ số là chẵn.

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Cac so nguyen co dung 3 chu so va tong cac chu so la chan:\n");

    for (int i = 100; i < 1000; i++)
    {
        int digit1 = i / 100;
        int digit2 = (i / 10) % 10;
        int digit3 = i % 10;
        int sum = digit1 + digit2 + digit3;

        if (sum % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
