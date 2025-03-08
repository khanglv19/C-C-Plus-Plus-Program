/* Viết chương trình thực hiện các yêu cầu sau:
	- Nhập vào giá trị ngày, tháng, năm.
	- Kiểm tra ngày, tháng, năm có tạo 1 ngày hợp lệ theo lịch dương.
	- Nếu ngày hợp lệ thì tính ngày tiếp theo và ngày trước đó.
Ví du:
	2/4/2012 -> hợp lệ -> ngày tiếp theo: 3/4/2012, ngày trước đó: 1/4/2012
	30/2/2011, 31/6/2010 -> không hợp lệ
	31/12/2011 -> hợp lệ -> ngày tiếp theo: 1/1/2012, ngày trước đó: 29/12/2011 */

#include <stdio.h>

// Hàm kiểm tra năm nhuận
int isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm kiểm tra ngày hợp lệ
int isValidDate(int day, int month, int year)
{
	if (year < 1 || month < 1 || month > 12 || day < 1)
		return 0;

	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear(year))
		daysInMonth[2] = 29;

	return day <= daysInMonth[month];
}

// Hàm tính ngày tiếp theo
void nextDay(int *day, int *month, int *year)
{
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear(*year))
		daysInMonth[2] = 29;
	(*day)++;

	if (*day > daysInMonth[*month])
	{
		*day = 1;
		(*month)++;
		if (*month > 12)
		{
			*month = 1;
			(*year)++;
		}
	}
}

// Hàm tính ngày trước đó
void previousDay(int *day, int *month, int *year)
{
	(*day)--;
	if (*day < 1)
	{
		(*month)--;
		if (*month < 1)
		{
			*month = 12;
			(*year)--;
		}

		int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		if (isLeapYear(*year))
			daysInMonth[2] = 29;
		*day = daysInMonth[*month];
	}
}

int main()
{
	int day, month, year;

	// Nhập ngày, tháng, năm
	printf("Nhap ngay: ");
	scanf("%d", &day);
	printf("Nhap thang: ");
	scanf("%d", &month);
	printf("Nhap nam: ");
	scanf("%d", &year);

	if (isValidDate(day, month, year))
	{
		printf("Ngay hop le: %d/%d/%d\n", day, month, year);

		int nextD = day, nextM = month, nextY = year;
		nextDay(&nextD, &nextM, &nextY);
		printf("Ngay tiep theo: %d/%d/%d\n", nextD, nextM, nextY);

		int prevD = day, prevM = month, prevY = year;
		previousDay(&prevD, &prevM, &prevY);
		printf("Ngay truoc do: %d/%d/%d\n", prevD, prevM, prevY);
	}
	else
	{
		printf("Ngay khong hop le!\n");
	}

	return 0;
}