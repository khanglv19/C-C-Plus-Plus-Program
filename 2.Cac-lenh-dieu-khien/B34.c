/*Nhập vào 3 số nguyên a, b, c. Kiểm tra xem 3 số đó có là độ dài 3 cạnh của tam giác không?
Nếu có thì chúng tạo thành tam giác gì (Thường, cân, vuông, đều hay vuông cân)?
Gợi ý: 3 số là độ dài 3 cạnh một tam giác nếu như tổng 2 cạnh bất kỳ lớn hơn cạnh còn lại.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;

    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    // Kiểm tra bất đẳng thức tam giác
    if (a + b > c && a + c > b && b + c > a)
    {
        // Kiểm tra loại tam giác
        if (a == b && a == c)
        {
            printf("Tam giac đeu\n");
        }
        else if (a == b || a == c || b == c)
        {
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            {
                printf("Tam giac vuong can\n");
            }
            else
            {
                printf("Tam giac can\n");
            }
        }
        else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            printf("Tam giac vuong\n");
        }
        else
        {
            printf("Tam giac thuong\n");
        }
    }
    else
    {
        printf("Ba so khong phai la đo dai 3 canh cua tam giac\n");
    }
    return 0;
}