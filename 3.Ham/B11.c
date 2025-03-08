/* Nhập vào số T giây. Đổi T về dạng h:m:s.
Ví dụ:mT=3850 giây -> 1h:4m:10s */

#include <stdio.h>

int main()
{
    int T;

    // Nhập số giây từ bàn phím
    printf("Nhap so giay T: ");
    scanf("%d", &T);

    if (T < 0)
    {
        printf("So giay khong hop le. Vui long nhap so khong am!\n");
        return 1;
    }

    int hours = T / 3600;
    int minutes = (T % 3600) / 60;
    int seconds = T % 60;

    // Xuất kết quả
    printf("%d giay -> %dh:%dm:%ds\n", T, hours, minutes, seconds);

    return 0;
}