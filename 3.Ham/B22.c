/* Viết chương trình nhập số nguyên dương n gồm 5 chữ số, kiểm tra xem các chữ số n có phải là đối xứng hay không.
Ví dụ: Đối xứng: 13531. Không đối xứng: 13921. */

#include <stdio.h>

// Hàm kiểm tra số đối xứng
int isPalindrome(int n)
{
    int reversed = 0, original = n;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main()
{
    int n;

    // Nhập số nguyên dương có 5 chữ số
    do
    {
        printf("Nhap so nguyen duong co 5 chu so: ");
        scanf("%d", &n);
        if (n < 10000 || n > 99999)
        {
            printf("So khong hop le! Vui long nhap lai.\n");
        }
    } while (n < 10000 || n > 99999);

    // Kiểm tra và in kết quả
    if (isPalindrome(n))
    {
        printf("%d la so doi xung.\n", n);
    }
    else
    {
        printf("%d khong phai la so doi xung.\n", n);
    }

    return 0;
}