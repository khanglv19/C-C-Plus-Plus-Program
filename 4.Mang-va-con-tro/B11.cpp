/* Xây dựng hàm nhập mảng a gồm n phần tử thỏa:
- Không chứa số âm.
- Có nhiều nhất là 3 phần tử có giá trị 0.
- Khoảng cách giữa hai phần tử bất kỳ không quá 4. */

#include <stdio.h>

void nhapMang(int a[], int *n)
{
    int countZero = 0;
    int prevValue = -1;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        int value;

        while (1)
        {
            printf("Nhap phan tu a[%d]: ", i);
            scanf("%d", &value);

            if (value < 0)
            {
                printf("Gia tri khong duoc am. Hay nhap lai!\n");
            }
            else if (value == 0 && countZero >= 3)
            {
                printf("Mang chi duoc chua toi da 3 phan tu 0. Hay nhap lai!\n");
            }
            else if (prevValue != -1 && (value > prevValue + 4 || prevValue > value + 4))
            {
                printf("Khoang cach giua hai phan tu lien tiep khong duoc lon hon 4. Hay nhap lai!\n");
            }
            else
            {
                a[i] = value;
                if (value == 0)
                    countZero++;
                prevValue = value;
                break;
            }
        }
    }
}

void xuatMang(int a[], int n)
{
    printf("Mang da nhap: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[100], n;

    nhapMang(a, &n);
    xuatMang(a, n);

    return 0;
}