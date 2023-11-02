// Kiểm tra số nguyên dương n có các chữ số toàn là chữ số chẵn hay không.

#include <stdio.h>

int hasOnlyEvenDigits(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
        {
            return -1; // Nếu có ít nhất một chữ số lẻ, trả về false
        }
        n /= 10;
    }
    return 0; // Nếu tất cả chữ số đều là chẵn, trả về true
}

int main()
{
    int n;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else
    {
        if (hasOnlyEvenDigits(n) == 0)
        {
            printf("%d co cac chu so toan la chu so chan.\n", n);
        }
        else
        {
            printf("%d khong co cac chu so toan la chu so chan.\n", n);
        }
    }

    return 0;
}