/*Nhập vào một số bất kỳ (0 -> 9), cho biết cách đọc số vừa nhập.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    do
    {
        printf("Nhap va so bat ky: ");
        scanf("%d", &n);
    } while (n > 9);

    switch (n)
    {
    case 0:
        printf("Khong");
        break;
    case 1:
        printf("Mot");
        break;
    case 2:
        printf("Hai");
        break;
    case 3:
        printf("Ba");
        break;
    case 4:
        printf("Bon");
        break;
    case 5:
        printf("Nam");
        break;
    case 6:
        printf("Sau");
        break;
    case 7:
        printf("Bay");
        break;
    case 8:
        printf("Tam");
        break;
    case 9:
        printf("Chin");
        break;

    default:
        printf("So vua nhap khong hop le!");
    }
    return 0;
}