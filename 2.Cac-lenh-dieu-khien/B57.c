// Kiểm tra số nguyên dương n có các chữ số tăng dần từ trái qua phải hay không.

#include <stdio.h>

int hasIncreasingDigits(int n)
{
    int lastDigit = n % 10;

    while (n > 0)
    {
        n /= 10;
        int currentDigit = n % 10;
        if (currentDigit > lastDigit)
        {
            return -1; // Nếu có ít nhất một cặp chữ số không tăng dần, trả về false
        }
        lastDigit = currentDigit;
    }
    return 0; // Nếu tất cả chữ số tăng dần, trả về true
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
        if (hasIncreasingDigits(n) == 0)
        {
            printf("%d co cac chu so tang dan tu trai qua phai.\n", n);
        }
        else
        {
            printf("%d khong ca cac chu so tang dan tu trai qua phai.\n", n);
        }
    }

    return 0;
}