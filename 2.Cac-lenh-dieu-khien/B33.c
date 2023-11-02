/*Viết chương trình nhập số nguyên lớn N (khai báo: long N) có k chữ số.
- Tìm chữ số hàng đầu tiên của N
- Tính tổng các chữ số của N
- Tìm chữ số lớn nhất trong k chữ số đó
-  Đếm số chữ số của N
- N có phải là số có các chữ số khác nhau đôi một không?

Gợi ý: Áp dụng các phép toán  "/" và "%" cho 10 để lấy lần lượt từng chữ số của N
theo chiều từ chữ số hàng đơn vị đến các chữ số hàng chục, hàng trăm...
Ví dụ : N = 347285108, x = N % 10 = 8, y = N / 10 = 34728510. Lặp lại 2 phép toán chia này ta lần lượt thấy từng chữ số của N từ hàng đơn vị.
Khi đó N có :
- Chữ số hàng đầu tiên là 3.
- Tổng các chữ số : 3 + 4 + 7 + 2 + 8 + 5 + 1 + 0 + 8 = 38
- Chữ số lớn nhất là "8".
- Số chữ số của N : 9.
- N không phải số có các chữ số khác nhau đôi một vì có 2 chữ số 8.*/

#include <stdio.h>

int main()
{
    long N;
    printf("Nhap so nguyen lon N: ");
    scanf("%ld", &N);

    if (N < 0)
    {
        N = -N; // Chuyển số âm thành dương để tính toán
    }

    long originalN = N; // Dùng để lưu giữ giá trị ban đầu của N
    int firstDigit, largestDigit, sumOfDigits = 0;
    int digitCount = 0;
    int uniqueDigits[10] = {0};

    // Tìm chữ số hàng đầu tiên của N
    while (N >= 10)
    {
        N /= 10;
    }
    firstDigit = N;

    // Tìm chữ số lớn nhất và tính tổng các chữ số của N
    N = originalN;
    largestDigit = N % 10;
    while (N > 0)
    {
        int digit = N % 10;
        sumOfDigits += digit;
        if (digit > largestDigit)
        {
            largestDigit = digit;
        }
        // Đếm số chữ số của N
        digitCount++;
        // Kiểm tra chữ số đã xuất hiện hay chưa
        if (uniqueDigits[digit] == 0)
        {
            uniqueDigits[digit] = 1;
        }
        else
        {
            // Nếu chữ số đã xuất hiện, N không có các chữ số khác nhau đôi một
            uniqueDigits[digit] = 2;
        }
        N /= 10;
    }

    printf("Chu so hang dau tien cua N: %d\n", firstDigit);
    printf("Tong cac chu so cua N: %d\n", sumOfDigits);
    printf("Chu so lon nhat trong N: %d\n", largestDigit);
    printf("So chu so cua N: %d\n", digitCount);

    if (uniqueDigits[0] == 2 || uniqueDigits[1] == 2 || uniqueDigits[2] == 2 ||
        uniqueDigits[3] == 2 || uniqueDigits[4] == 2 || uniqueDigits[5] == 2 ||
        uniqueDigits[6] == 2 || uniqueDigits[7] == 2 || uniqueDigits[8] == 2 || uniqueDigits[9] == 2)
    {
        printf("N khong co cac chu so khac nhau đoi mot.\n");
    }
    else
    {
        printf("N co cac chu so khac nhau doi mot.\n");
    }

    return 0;
}