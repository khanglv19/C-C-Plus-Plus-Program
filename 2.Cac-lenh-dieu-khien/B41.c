// Viết chương trình Nhập vào một số nguyên dương n. Tính tổng các chữ số có trong số nguyên dương n.

#include <stdio.h>
#include <conio.h>

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
        int sum = 0;

        while (n > 0)
        {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }

        printf("Tong cac chu so trong so nguyen duong la: %d\n", sum);
    }

    return 0;
}
