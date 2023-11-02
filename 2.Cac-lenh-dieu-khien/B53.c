/*Viết chương trình kiểm tra xem n có phải là số nguyên tố hay không.
Biết rằng số nguyên tố là số nguyên lớn hơn 1 và chỉ có 2 ước là 1 và chính nó.*/

#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
    {
        return -1; // Số nguyên tố phải lớn hơn 1
    }

    if (n <= 3)
    {
        return 0; // 2 và 3 là số nguyên tố
    }

    // Kiểm tra xem n có ước số nào khác 1 và chính nó không
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return -1; // Nếu n có ước số thì không phải là số nguyên tố
        }
    }

    return 0;
}

int main()
{
    int n;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (isPrime(n) == 0)
    {
        printf("%d la so nguyen to.\n", n);
    }
    else
    {
        printf("%d khong phai la se nguyen to.\n", n);
    }

    return 0;
}