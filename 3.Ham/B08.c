/* Nhập số N (0<n<1000, nhập sai thì yêu cầu nhập lại). Xuất ra cách đọc số N.
Ví dụ: N=256. Đọc là: hai tram nam muoi sau. */

#include <stdio.h>

void docSo(int n)
{
    char *donVi[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};

    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;

    if (tram > 0)
    {
        printf("%s tram", donVi[tram]); // trăm
        if (chuc == 0 && donvi != 0)
        {
            printf(" linh");
        }
    }

    if (chuc > 1)
    {
        printf(" %s muoi", donVi[chuc]); // mưới
        if (donvi == 1)
        {
            printf(" mot"); // mốt
        }
        else if (donvi == 5)
        {
            printf(" lam"); // lăm
        }
        else if (donvi != 0)
        {
            printf(" %s", donVi[donvi]);
        }
    }
    else if (chuc == 1)
    {
        printf(" muoi"); // mười
        if (donvi > 0)
        {
            printf(" %s", donVi[donvi]);
        }
    }
    else if (donvi > 0)
    {
        printf(" %s", donVi[donvi]);
    }
}

int main()
{
    int n;

    do
    {
        printf("Nhap so nguyen N (0 < N < 1000): ");
        scanf("%d", &n);

        if (n <= 0 || n >= 1000)
        {
            printf("So khong hop le. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n >= 1000);

    printf("Cach doc so %d la: ", n);
    docSo(n);
    printf(".\n");

    return 0;
}