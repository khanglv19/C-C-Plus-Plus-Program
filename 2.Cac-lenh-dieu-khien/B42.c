//

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else
    {
        int count = 0;

        for (int i = 1; i < n; i++)
        {
            if (i % 3 == 0)
            {
                count++;
            }
        }

        printf("Co %d so nguyen duong nho hon %d chia het cho 3.\n", count, n);
    }

    return 0;
}
