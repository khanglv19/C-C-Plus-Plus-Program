/* Nhập vào giờ, phút, giây. Kiểm tra giờ, phút, giây có hợp lệ không?
Nếu hợp lệ thì cho biết giờ sau đó 1 giây và trước đó 1 giây là bao nhiêu. */

#include <stdio.h>

// Hàm kiểm tra thời gian hợp lệ
int isValidTime(int hour, int minute, int second)
{
    return (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59 && second >= 0 && second <= 59);
}

// Hàm tính thời gian sau 1 giây
void nextSecond(int *hour, int *minute, int *second)
{
    (*second)++;
    if (*second == 60)
    {
        *second = 0;
        (*minute)++;
        if (*minute == 60)
        {
            *minute = 0;
            (*hour)++;
            if (*hour == 24)
            {
                *hour = 0;
            }
        }
    }
}

// Hàm tính thời gian trước 1 giây
void previousSecond(int *hour, int *minute, int *second)
{
    (*second)--;
    if (*second < 0)
    {
        *second = 59;
        (*minute)--;
        if (*minute < 0)
        {
            *minute = 59;
            (*hour)--;
            if (*hour < 0)
            {
                *hour = 23;
            }
        }
    }
}

int main()
{
    int hour, minute, second;

    // Nhập giờ, phút, giây
    printf("Nhap gio: ");
    scanf("%d", &hour);
    printf("Nhap phut: ");
    scanf("%d", &minute);
    printf("Nhap giay: ");
    scanf("%d", &second);

    if (isValidTime(hour, minute, second))
    {
        printf("Thoi gian hop le: %02d:%02d:%02d\n", hour, minute, second);

        int nextH = hour, nextM = minute, nextS = second;
        nextSecond(&nextH, &nextM, &nextS);
        printf("Gio sau do 1 giay: %02d:%02d:%02d\n", nextH, nextM, nextS);

        int prevH = hour, prevM = minute, prevS = second;
        previousSecond(&prevH, &prevM, &prevS);
        printf("Gio truoc do 1 giay: %02d:%02d:%02d\n", prevH, prevM, prevS);
    }
    else
    {
        printf("Thoi gian khong hop le!\n");
    }

    return 0;
}