/* Cho mảng 1 chiều chứa các số nguyên. Hãy viết chương trình tìm số chẵn lớn nhất trong mảng. Nếu mảng không có số chẵn thì trả về -1. */

#include <stdio.h>

#define MAX_SIZE 100

int findLargestEven(int arr[], int n)
{
    int maxEven = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && (maxEven == -1 || arr[i] > maxEven))
        {
            maxEven = arr[i];
        }
    }
    return maxEven;
}

int main()
{
    int arr[MAX_SIZE];
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE)
    {
        printf("Kich thuoc mang khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largestEven = findLargestEven(arr, n);

    if (largestEven != -1)
    {
        printf("So chan lon nhat trong mang la: %d\n", largestEven);
    }
    else
    {
        printf("Mang khong co so chan!\n");
    }

    return 0;
}