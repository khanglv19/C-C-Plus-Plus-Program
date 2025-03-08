// Nhập mảng a gồm n phần tử sao cho mọi phần tử lặp lại không quá hai lần

#include <stdio.h>
#include <stdlib.h>

// Hàm kiểm tra số lần xuất hiện của phần tử
int demLanXuatHien(int *a, int n, int x)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;

    do
    {
        printf("Nhap so phan tu cua mang (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        do
        {
            printf("Nhap phan tu a[%d]: ", i);
            scanf("%d", &x);
            if (demLanXuatHien(a, i, x) >= 2)
            {
                printf("Phan tu %d da xuat hien 2 lan, vui long nhap gia tri khac!\n", x);
            }
        } while (demLanXuatHien(a, i, x) >= 2);
        a[i] = x;
    }

    printf("Mang vua nhap: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}