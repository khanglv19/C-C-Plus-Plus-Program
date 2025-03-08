// Xuất các số <1000 sao cho tổng các chữ số bằng tích các chữ số.

#include <stdio.h>

int main()
{
    printf("Cac so nho hon 1000 sao cho tong cac chu so bang tich cac chu so:\n");

    for (int i = 1; i < 1000; i++)
    {
        int a = i / 100;       // Chữ số hàng trăm
        int b = (i / 10) % 10; // Chữ số hàng chục
        int c = i % 10;        // Chữ số hàng đơn vị

        int sum = a + b + c;
        int product = (a ? a : 1) * (b ? b : 1) * (c ? c : 1);

        if (sum == product)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}