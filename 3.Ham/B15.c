// Xuất các số có 5 chữ số sao cho có đúng 2 chữ số bằng nhau.

#include <stdio.h>

// Hàm đếm số lần xuất hiện của mỗi chữ số
int countDigits(int n, int counts[10])
{
    for (int i = 0; i < 10; i++)
    {
        counts[i] = 0;
    }

    while (n > 0)
    {
        counts[n % 10]++;
        n /= 10;
    }

    int pairs = 0;

    for (int i = 0; i < 10; i++)
    {
        if (counts[i] == 2)
        {
            pairs++;
        }
    }

    return pairs;
}

int main()
{
    printf("Cac so co 5 chu so voi dung 2 chu so bang nhau:\n");

    for (int i = 10000; i <= 99999; i++)
    {
        int counts[10];
        if (countDigits(i, counts) == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}