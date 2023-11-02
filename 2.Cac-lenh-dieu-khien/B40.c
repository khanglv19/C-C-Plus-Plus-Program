/*Nhập vào số nguyên dương . Cho biết số nguyên dương n có bao nhiêu ước là số nguyên dương.*/

#include <stdio.h>
#include <conio.h>

int countDivisors(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    return count;
}

void main()
{
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else
    {
        int divisorCount = countDivisors(n);
        printf("So nguyen duong %d co %d uoc.\n", n, divisorCount);
    }

    getch();
}