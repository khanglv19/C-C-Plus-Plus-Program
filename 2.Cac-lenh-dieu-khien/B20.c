// Viết chương trình tính tổng: 1 + (1 + 2) + (1 + 2 + 3) +...+ (1 + 2 + 3 +...+ n), với n>0 nhập từ bàn phím.

/* Chúng ta có thể sử dụng một vòng lặp for để duyệt qua các giá trị của n từ 1 đến n và cộng dồn vào một biến kiểu int để lưu tổng. Trong mỗi lần lặp, chúng ta cần tính tổng của các số từ 1 đến n bằng cách sử dụng công thức:
    S(n) = n * (n + 1) / 2 */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1) / 2;
    }

    printf("Tong la: %d\n", sum);
    getch();
}