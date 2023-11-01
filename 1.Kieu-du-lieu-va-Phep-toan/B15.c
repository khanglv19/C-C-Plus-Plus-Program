/*Nhập tuổi của một người, in ra năm sinh của người đó.*/

/* Để viết chương trình C nhập tuổi của một người và in ra năm sinh của người đó, chúng ta cần biết năm hiện tại.Chúng ta có thể lấy năm hiện tại bằng cách sử dụng thư viện time.h trong C.Sau đó, chúng ta có thể nhập tuổi của người đó bằng hàm scanf và lưu vào một biến kiểu int.Cuối cùng, chúng ta có thể tính năm sinh của người đó bằng cách lấy năm hiện tại trừ đi tuổi của người đó và in ra màn hình bằng hàm printf. */

#include <stdio.h>
#include <conio.h>
#include <time.h>

void main()
{
    // Lấy năm hiện tại
    time_t now = time(NULL);
    struct tm *tm = localtime(&now);
    int year = tm->tm_year + 1900;

    // Nhập tuổi của người đó
    int age;
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);

    // Tính và in ra năm sinh của người đó
    int birth_year = year - age;
    printf("Nam sinh cua ban la: %d\n", birth_year);
    getch();
}
