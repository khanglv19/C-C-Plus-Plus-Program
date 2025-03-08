// Viết chương trình để nhập ma trận 2x3 và trừ tất cả các phần tử 2 đơn vị.

#include <stdio.h>

int main()
{
    int matrix[2][3];

    // Nhập ma trận 2x3
    printf("Nhap ma tran 2x3:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Trừ mỗi phần tử đi 2 đơn vị
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] -= 2;
        }
    }

    // In ma trận sau khi trừ
    printf("Ma tran sau khi tru 2 don vi:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}