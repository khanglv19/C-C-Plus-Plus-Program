/* Sắp xếp mảng a sao cho:
- Số dương ở đầu mảng và có thứ tự tăng.
- Số âm ở giữa mảng và có thử tự giảm.
- Số 0 ở cuối. */

#include <stdio.h>

void sortArray(int a[], int n)
{
    int positive[100], negative[100], zeroCount = 0;
    int posCount = 0, negCount = 0;

    // Phân tách số dương, số âm và số 0
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive[posCount++] = a[i];
        }
        else if (a[i] < 0)
        {
            negative[negCount++] = a[i];
        }
        else
        {
            zeroCount++;
        }
    }

    // Sắp xếp số dương tăng dần
    for (int i = 0; i < posCount - 1; i++)
    {
        for (int j = i + 1; j < posCount; j++)
        {
            if (positive[i] > positive[j])
            {
                int temp = positive[i];
                positive[i] = positive[j];
                positive[j] = temp;
            }
        }
    }

    // Sắp xếp số âm giảm dần
    for (int i = 0; i < negCount - 1; i++)
    {
        for (int j = i + 1; j < negCount; j++)
        {
            if (negative[i] < negative[j])
            {
                int temp = negative[i];
                negative[i] = negative[j];
                negative[j] = temp;
            }
        }
    }

    // Gộp mảng
    int index = 0;
    for (int i = 0; i < posCount; i++)
    {
        a[index++] = positive[i];
    }
    for (int i = 0; i < negCount; i++)
    {
        a[index++] = negative[i];
    }
    for (int i = 0; i < zeroCount; i++)
    {
        a[index++] = 0;
    }
}

int main()
{
    int a[100];
    int n;

    printf("Nhap so phan tu cua mang a: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sortArray(a, n);

    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}