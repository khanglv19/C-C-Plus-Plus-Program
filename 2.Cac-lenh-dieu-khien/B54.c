/*An gửi số tiền là n USD vào ngân hàng. An muốn số tiền của mình sẽ bằng hoặc lớn hơn 1000 USD.
Giúp An viết chương trình tính số tháng cần gửi vào ngân hàng để tổng số tiền vốn lẫn tiền lãi sẽ lớn hơn 1000 USD.
Biết rằng, lãi suất là 0.7%/tháng và số tiền vốn n được nhập từ bàn phím.*/

#include <stdio.h>

int main()
{
    double principal;            // Số tiền vốn ban đầu
    double interestRate = 0.007; // Lãi suất hàng tháng (0.7%)
    double total = 0;            // Tổng số tiền vốn và tiền lãi
    int months = 0;              // Số tháng cần tính

    printf("Nhap so tien von (USD): ");
    scanf("%lf", &principal);

    while (total < 1000)
    {
        total += principal + total * interestRate;
        months++;
    }

    printf("So thang can gui vao ngan hang la: %d thang\n", months);

    return 0;
}