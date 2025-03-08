/*Nhập năm sinh. Tính tuổi tương ứng. Nếu tuổi >= 18 thì in ra: "Đủ tuổi đi làm", ngược lại in ra: "Còn tuổi đi học".*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    int namSinh, namHienTai, tuoi;

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    time_t t = time(0);
    struct tm *Now = localtime(&t);
    namHienTai = Now->tm_year + 1900;
    tuoi = namHienTai - namSinh;

    printf("%.d tuoi\n", tuoi);

    if (tuoi >= 18)
        printf("Du tuoi di lam");
    else
        printf("Con tuoi di hoc");

    return 0;
}