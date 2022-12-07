/*Viết chương trình giải phương trình bậc nhất: ax + b = 0 (a khác 0), với a, b là số nguyên, x là số thực.*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    float x;

    do
    {
        printf("Nhap he so a: ");
        scanf("%d", &a);
    } while (a == 0);

    printf("Nhap he so b: ");
    scanf("%d", &b);

    x = (float)-b / a;

    printf("Nghiem cua phuong trinh %dx + %d = 0 la: %f", a, b, x);
    getch();
}