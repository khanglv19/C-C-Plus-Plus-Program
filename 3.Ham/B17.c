/* Viết chương trình nhập số nguyên lớn hơn N (khai báo: long N) có k chữ số.
- Tìm chữ số hàng đầu tiên của N.
- Tính tổng các chữ số của N.
- Tìm chữ số lớn nhất trong k chữ số đó.
- Đếm số chữ số của N.
- N có phải là số có các chữ số khác nhau đôi một không?
Gợi ý: Áp dụng các phép toán  "/" và "%" cho 10 để lấy lần lượt từng chữ số của N
theo chiều từ chữ số hàng đơn vị đến các chữ số hàng chục, hàng trăm...
Ví dụ: N = 347285108, x = N % 10 = 8, y = N / 10 = 34728510. Lặp lại 2 phép toán chia này ta lần lượt thấy từng chữ số của N từ hàng đơn vị.
Khi đó N có:
- Chữ số hàng đầu tiên là 3.
- Tổng các chữ số: 3 + 4 + 7 + 2 + 8 + 5 + 1 + 0 + 8 = 38
- Chữ số lớn nhất là "8".
- Số chữ số của N: 9.
- N không phải số có các chữ số khác nhau đôi một vì có 2 chữ số 8.
- N có bao nhiêu chữ số chẵn và bao nhiêu chữ số. */

#include <stdio.h>

int main()
{
    long N;

    // Nhập số nguyên N
    do
    {
        printf("Nhap so nguyen duong N: ");
        scanf("%ld", &N);
        if (N <= 0)
        {
            printf("N phai lon hon 0. Vui long nhap lai!\n");
        }
    } while (N <= 0);

    long temp = N;
    int firstDigit, sum = 0, maxDigit = 0;
    int digitCount = 0, evenCount = 0, oddCount = 0;
    int freq[10] = {0};

    // Duyệt từng chữ số
    while (temp > 0)
    {
        int digit = temp % 10;

        // Xác định chữ số đầu tiên
        if (temp < 10)
        {
            firstDigit = temp;
        }

        // Tính tổng và tìm chữ số lớn nhất
        sum += digit;
        if (digit > maxDigit)
        {
            maxDigit = digit;
        }

        // Đếm số chẵn/lẻ
        if (digit % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        // Đếm số lần xuất hiện của từng chữ số
        freq[digit]++;

        // Đếm tổng số chữ số
        digitCount++;

        temp /= 10;
    }

    // Kiểm tra số có các chữ số khác nhau đôi một không
    int isUnique = 1;
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 1)
        {
            isUnique = 0;
            break;
        }
    }

    // Xuất kết quả
    printf("Chu so hang dau tien: %d\n", firstDigit);
    printf("Tong cac chu so: %d\n", sum);
    printf("Chu so lon nhat: %d\n", maxDigit);
    printf("So chu so cua N: %d\n", digitCount);
    printf("N %s la so co cac chu so khac nhau doi mot\n", isUnique ? "la" : "khong");
    printf("So chu so chan: %d\n", evenCount);
    printf("So chu so le: %d\n", oddCount);

    return 0;
}