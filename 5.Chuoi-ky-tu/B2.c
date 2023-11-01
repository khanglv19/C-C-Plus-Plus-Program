// Đếm số từ trong chuỗi.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int demSoTu(char *s);

void main()
{
    char s[90];

    printf("Nhap chuoi: ");
    gets(s);

    int kq = demSoTu(s);

    printf("\nSo tu trong chuoi la: %d", kq);
    getch();
}

int demSoTu(char *s)
{
    int n = strlen(s), i;
    int dem = 0;

    if (s[0] != ' ')
        dem = 1;

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            dem++;
    }
    return dem;
}