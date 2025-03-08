// Tạo mảng b chứa tất cả các phần tử của mảng a sao cho mỗi phần tử chỉ xuất hiện trong b đúng một lần.

#include <stdio.h>

int isUnique(int arr[], int size, int elem)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            return 0; // Phần tử đã tồn tại
        }
    }
    return 1; // Phần tử là duy nhất
}

void createUniqueArray(int a[], int n, int b[], int *m)
{
    *m = 0;
    for (int i = 0; i < n; i++)
    {
        if (isUnique(b, *m, a[i]))
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

    printf("Nhap so phan tu cua mang a: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    createUniqueArray(a, n, b, &m);

    printf("Mang b chua cac phan tu duy nhat tu mang a:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}