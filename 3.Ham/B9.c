// Tìm số n lớn nhất sao cho 1+2+3+...+n<M với N nhập từ bàn phím.

#include <stdio.h>

int main()
{
    int M;

    // Nhập số M từ bàn phím
    printf("Nhap so nguyen M: ");
    scanf("%d", &M);

    if (M <= 1)
    {
        printf("Khong co so n thoa man voi M <= 1.\n");
        return 1;
    }

    int sum = 0;
    int n = 0;

    // Tính số n lớn nhất sao cho 1 + 2 + ... + n < M
    while (sum + (n + 1) < M)
    {
        n++;
        sum += n;
    }

    printf("So n lon nhat sao cho 1 + 2 + ... + n < %d la: %d\n", M, n);

    return 0;
}