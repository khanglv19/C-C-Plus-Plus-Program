//Đếm số các ký tự đặc biệt (không phải ký tự và ký số) trong chuỗi.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[50];
    int chuCai = 0, chuSo = 0, kyTuDacBiet = 0, i = 0, l;

    printf("Nhap chuoi: ");
    gets(str);
    l = strlen(str);

    while (i < l)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            chuCai++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            chuSo++;
        }
        else
        {
            kyTuDacBiet++;
        }

        i++;
    }

    printf("So chu cai trong chuoi: %d", chuCai);
    printf("So chu so trong chuoi: %d", chuSo);
    printf("So ky tu dac biet trong chuoi: %d", kyTuDacBiet);

    getch();
}