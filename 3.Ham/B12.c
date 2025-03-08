/* Nhập vào 3 phân số dạng a/b, c/d, e/f (với a, b, c, d, e, f là các số nguyên). Kiểm tra các mẫu số phải khác 0.
Nếu vi phạm, yêu cầu nhập lại. Sau đó tính tổng, tích của 3 phân số với kết quả tối giản. */

#include <stdio.h>

// Hàm tính UCLN
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Hàm rút gọn phân số
void rutGon(int *tu, int *mau)
{
    int ucln = gcd(*tu, *mau);
    *tu /= ucln;
    *mau /= ucln;
}

int main()
{
    int a, b, c, d, e, f;

    // Nhập phân số và kiểm tra mẫu số
    do
    {
        printf("Nhap phan so thu nhat (a/b): ");
        scanf("%d/%d", &a, &b);
        if (b == 0)
            printf("Mau so phai khac 0. Vui long nhap lai!\n");
    } while (b == 0);

    do
    {
        printf("Nhap phan so thu hai (c/d): ");
        scanf("%d/%d", &c, &d);
        if (d == 0)
            printf("Mau so phai khac 0. Vui long nhap lai!\n");
    } while (d == 0);

    do
    {
        printf("Nhap phan so thu ba (e/f): ");
        scanf("%d/%d", &e, &f);
        if (f == 0)
            printf("Mau so phai khac 0. Vui long nhap lai!\n");
    } while (f == 0);

    // Tính tổng
    int tuTong = a * d * f + c * b * f + e * b * d;
    int mauTong = b * d * f;
    rutGon(&tuTong, &mauTong);

    // Tính tích
    int tuTich = a * c * e;
    int mauTich = b * d * f;
    rutGon(&tuTich, &mauTich);

    // Xuất kết quả
    printf("Tong 3 phan so: %d/%d\n", tuTong, mauTong);
    printf("Tich 3 phan so: %d/%d\n", tuTich, mauTich);

    return 0;
}