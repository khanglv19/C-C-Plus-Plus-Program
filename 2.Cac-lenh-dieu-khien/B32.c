// Viết chương trình xuất ra các số có 3 chữ số sao cho các chữ số khác nhau đôi một.

/*
- Sử dụng một vòng lặp for để duyệt qua các số từ 100 đến 999 và lưu vào một biến kiểu int là num.
- Sử dụng các phép toán chia lấy nguyên và chia lấy dư để tách ra 3 chữ số hàng trăm, hàng chục và hàng đơn vị của num và lưu vào 3 biến kiểu int là a, b và c.
- Sử dụng một câu lệnh if để kiểm tra xem 3 chữ số a, b và c có khác nhau đôi một hay không. Nếu có, in ra giá trị của num bằng hàm printf. */

#include <stdio.h>
#include <conio.h>

int main()
{
    for (int num = 100; num <= 999; num++)
    {
        // Tách ra 3 chữ số của num
        int a = num / 100;       // Chữ số hàng trăm
        int b = (num / 10) % 10; // Chữ số hàng chục
        int c = num % 10;        // Chữ số hàng đơn vị

        // Kiểm tra xem 3 chữ số có khác nhau đôi một hay không
        if (a != b && a != c && b != c)
        {
            printf("%d\n", num); // In ra số thỏa mãn
        }
    }
    return 0;
}