// Nhập vào số nguyên n. Nếu n > 5 thì tăng n lên 2 đơn vị và trả về giá trị n, ngược lại trả về giá trị 0.

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    if (n > 5)
    {
        n = n + 2;
        printf("Gia tri cua n la: %d\n", n);
    }
    else
    {
        printf("Gia tri cua n la: 0\n");
    }
    getch();
}