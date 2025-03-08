/* Cho mảng 1 chiều chứa các số thực. Hãy viết chương trình tìm phần tử xuất hiện nhiều nhất trong mảng,
nếu có nhiều phần tử có số lần xuất hiện bằng nhau thì xuất phần tử đầu tiên. */

#include <stdio.h>

#define MAX_SIZE 100

int findMostFrequent(float arr[], int n)
{
    int maxCount = 0;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    return index;
}

int main()
{
    float arr[MAX_SIZE];
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
        scanf("%f", &arr[i]);
    }

    int mostFrequentIndex = findMostFrequent(arr, n);
    printf("Phan tu xuat hien nhieu nhat la: %.2f\n", arr[mostFrequentIndex]);

    return 0;
}