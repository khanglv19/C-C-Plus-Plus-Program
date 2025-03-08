// Tạo mảng b chứa tất cả các số dương của mảng a.

#include <stdio.h>

void createPositiveArray(int a[], int n, int b[], int *m)
{
    *m = 0; // Khởi tạo kích thước của mảng b
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[*m] = a[i];
            (*m)++;
        }
    }
}

int main()
{
    int a[100], b[100];
    int n, m;

    // Nhập số phần tử của mảng a
    printf("Nhap so phan tu cua mang a: ");
    scanf("%d", &n);

    // Nhập các phần tử của mảng a
    printf("Nhap cac phan tu cua mang a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Tạo mảng b chứa các số dương từ mảng a
    createPositiveArray(a, n, b, &m);

    // In mảng b
    printf("Mang b chua cac so duong tu mang a:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}