// Viết chương trình đếm số lượng số chẵn trong [n,m]. Trong đó, n, m nhập từ bàn phím.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, m;

    printf("Nhap vao 2 so nguyen n, m: ");
    scanf("%d %d", &n, &m);

    int count = 0; // Biến đếm số chẵn

    for (int i = n; i <= m; i++)
    {
        if (i % 2 == 0)
        {            // Kiểm tra số chẵn
            count++; // Tăng biến đếm
        }
    }

    printf("So loung so chan trong [%d, %d] la: %d\n", n, m, count);
    return 0;
}