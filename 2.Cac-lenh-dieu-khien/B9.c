/* Viết chương trình nhập vào tháng trong năm. Xuất kết quả cho biết số ngày của tháng đó.
	Biết rằng:
		- Tháng 1, 3, 5, 7, 8, 10, 12: có 31 ngày.
		- Tháng 4, 6, 9, 11: có 30 ngày.
		- Tháng 2: có 28 hoặc 29 ngày. */

#include <stdio.h>
#include <conio.h>

void main()
{
	int month, year;

	printf("Nhap nam: ");
	scanf("%d", &year);
	printf("Nhap thang: ");
	scanf("%d", &month);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		printf("\nThang %d co 31 ngay", month);
	else
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
			printf("\nThang %d co 30 ngay", month);
		else
		{
			if ((year % 400 == 0) || (year % 4 == 0) && (year / 100 != 0))
				printf("\nThang 2 co 29 ngay");
			else
				printf("\nThang 2 co 28 ngay");
		}
	}
	getch();
}