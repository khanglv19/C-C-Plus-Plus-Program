// Kiểm tra số nguyên dương n có các chữ số giảm dần từ trái qua phải hay không.

#include <stdio.h>
#include <stdbool.h>

bool hasDecreasingDigits(int n)
{
    int lastDigit = n % 10;

    while (n > 0)
    {
        n /= 10;
        int currentDigit = n % 10;
        if (currentDigit < lastDigit)
        {
            return false; // Nếu có ít nhất một cặp chữ số không giảm dần, trả về false
        }
        lastDigit = currentDigit;
    }
    return true; // Nếu tất cả chữ số giảm dần, trả về true
}

int main()
{
    int n;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n < 10)
    {
        printf("Vui long nhap mot so nguyen duong co it nhat 2 chu so.\n");
    }
    else
    {
        if (hasDecreasingDigits(n))
        {
            printf("%d co cac chu so giam dan tu trai qua phai.\n", n);
        }
        else
        {
            printf("%d khong ca cac chu so giam dan tu trai qua phai.\n", n);
        }
    }

    return 0;
}