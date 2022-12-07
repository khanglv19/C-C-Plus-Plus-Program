// Viết chương trình tính tổng các số tự nhiên nhỏ hơn n (sử dụng vòng lặp while).

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, s = 0, i = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    while (i < n)
    {
        s = s + i;
        i++;
    }
    printf("Tong cac so tu nhien nho hon n: %d", s);
    getch();
}