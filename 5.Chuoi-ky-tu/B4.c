//Đảo ngược chuỗi.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[100]; // khai bao chuoi a có toi da 100 ky tu
    
    printf("Nhap vao chuoi ky tu: ");
    gets(a);
    printf("Chuoi ly tu vua nhap la: %s", a);
    strrev(a);
    printf("\nChuoi theo chieu dao nguoc: %s", a);

    getch();
}