/*Viết chương trình tính tiền karaoke theo cách sau:
THỜI GIAN			ĐƠN GIÁ / GIỜ
...<- 10h			Giờ nghỉ
10h -> 17h			20.000 đồng
17h -> 24h			45.000 đồng
24h ->...			Giờ nghỉ */

#include <stdio.h>

int main()
{
    int startTime, endTime;
    int duration;
    double totalCost = 0.0;

    printf("Nhap thoi gian bat dau (0-24): ");
    scanf("%d", &startTime);

    if (startTime < 10)
    {
        while (startTime < 10)
        {
            printf("%dh dang la gio nghi!\n", startTime);
            printf("Nhap thoi gian bat dau (0-24): ");
            scanf("%d", &startTime);
        }
    }

    printf("Nhap thoi gian ket thuc (0-24): ");
    scanf("%d", &endTime);

    if (startTime < 0 || startTime > 24 || endTime < 0 || endTime > 24)
    {
        printf("Vui long nhap thoi gian hop le tu 0 đen 24!\n");

        while (startTime < 0 || startTime > 24 || endTime < 0 || endTime > 24)
        {
            printf("Nhap thoi gian ket thuc (0-24): ");
            scanf("%d", &endTime);
        }
    }
    else if (startTime >= endTime)
    {
        printf("Thoi gian ket thuc phai sau thoi gian bat dau!\n");
        while (startTime >= endTime)
        {
            printf("Nhap thoi gian ket thuc (0-24): ");
            scanf("%d", &endTime);
        }
    }
    else
    {
        duration = endTime - startTime;

        if (startTime < 10)
        {
            if (endTime <= 10)
            {
                totalCost = 0.0; // Giờ nghỉ
            }
            else if (endTime <= 17)
            {
                totalCost = duration * 20000.0;
            }
            else if (endTime <= 24)
            {
                totalCost = (10 - startTime) * 20000.0 + (endTime - 17) * 45000.0;
            }
        }
        else if (startTime < 17)
        {
            if (endTime <= 17)
            {
                totalCost = duration * 20000.0;
            }
            else if (endTime <= 24)
            {
                totalCost = (17 - startTime) * 20000.0 + (endTime - 17) * 45000.0;
            }
        }
        else if (startTime < 24)
        {
            if (endTime <= 24)
            {
                totalCost = duration * 45000.0;
            }
        }

        printf("Tong tien phai tra: %.2lf dong\n", totalCost);
    }

    return 0;
}