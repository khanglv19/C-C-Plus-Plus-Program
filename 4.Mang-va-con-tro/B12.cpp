/* Xây dựng hàm nhập mảng a gồm n phần tử số nguyên phân biệt thỏa:
- Không chứa số nguyên tố lớn hơn 200.
- Các số không nguyên tố có thứ tự giảm. */

#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Hàm kiểm tra số đã tồn tại trong mảng
bool daTonTai(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return true;
    }
    return false;
}

// Hàm nhập mảng với các điều kiện cho trước
void nhapMang(int a[], int *n)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);

    int count = 0;

    while (count < *n)
    {
        int value;

        printf("Nhap phan tu thu %d: ", count + 1);
        scanf("%d", &value);

        if (daTonTai(a, count, value))
        {
            printf("Phan tu da ton tai trong mang. Vui long nhap so khac!\n");
        }
        else if (laSoNguyenTo(value) && value > 200)
        {
            printf("Khong chap nhan so nguyen to lon hon 200. Nhap lai!\n");
        }
        else
        {
            a[count++] = value;
        }
    }

    // Sắp xếp các số không nguyên tố theo thứ tự giảm dần
    for (int i = 0; i < *n - 1; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (!laSoNguyenTo(a[i]) && !laSoNguyenTo(a[j]) && a[i] < a[j])
            {
                int temp = a[i];

                a[i] = a[j];
                a[j] = temp;
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