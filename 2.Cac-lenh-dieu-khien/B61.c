// Viết chương trình xuất số đảo của số nguyên dương n, n nhập từ bàn phím.

#include <stdio.h>

int reverseNumber(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main()
{
    int n;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else
    {
        int reversed = reverseNumber(n);
        printf("So đao cua %d la: %d\n", n, reversed);
    }

    return 0;
}