// Viết chương trình nhập một số nguyên dương n. Tìm số nguyên dương m nhỏ nhất sao cho 1 + 2 + 3 +...+ m > n.

#include <stdio.h>

int findSmallestM(int n)
{
    int m = 1;
    int sum = 0;

    while (sum <= n)
    {
        sum += m;
        m++;
    }

    return m - 1;
}

int main()
{
    int n;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else
    {
        int smallestM = findSmallestM(n);
        printf("So nguyen duong nho nhat m sao cho 1 + 2 + 3 + ... + m > %d la: %d\n", n, smallestM);
    }

    return 0;
}