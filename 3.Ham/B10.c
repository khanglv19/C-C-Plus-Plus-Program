/* Nhập vào N là số ngày (N>0, nếu nhập sai thì thông báo và yêu cầu nhập lại). Cho biết N ngày đó có bao nhiêu tuần và ngày lẻ.
Ví dụ: N=37, có 5 tuần và 2 ngày lẻ. */

#include <stdio.h>

int main()
{
    int N;

    // Nhập số ngày từ bàn phím
    do
    {
        printf("Nhap so ngay (N > 0): ");
        scanf("%d", &N);

        if (N <= 0)
        {
            printf("So ngay khong hop le. Vui long nhap lai!\n");
        }
    } while (N <= 0);

    int weeks = N / 7;
    int days = N % 7;

    // Xuất kết quả
    printf("%d ngay co %d tuan va %d ngay le.\n", N, weeks, days);

    return 0;
}