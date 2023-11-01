/*Nhập 4 số nguyên, Tính tổng 2 số đầu, tính hiệu hai số cuối. Tính thương cho tổng hai số đầu và tổng hai số cuối.
In ra thương với 0 số thập phân và 1 số thập phân.*/

/* Chúng ta có thể nhập 4 số nguyên bằng hàm scanf và lưu vào 4 biến kiểu int. Sau đó, chúng ta có thể tính tổng 2 số đầu bằng cách cộng 2 số đầu và lưu vào một biến kiểu int. Chúng ta có thể tính hiệu hai số cuối bằng cách trừ số thứ 3 cho số thứ 4 và lưu vào một biến kiểu int. Cuối cùng, chúng ta có thể tính thương cho tổng hai số đầu và tổng hai số cuối bằng cách chia tổng hai số đầu cho tổng hai số cuối và in ra màn hình bằng hàm printf. */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d;

    printf("Nhap 4 so nguyen: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int sum1 = a + b;
    int diff2 = c - d;
    float quotient = (float)sum1 / diff2;

    printf("Tong 2 so dau la: %d\n", sum1);
    printf("Hieu 2 so cuoi la: %d\n", diff2);
    printf("Thuong cua tong 2 so dau va tong 2 so cuoi la: %.1f\n", quotient);
    getch();
}
