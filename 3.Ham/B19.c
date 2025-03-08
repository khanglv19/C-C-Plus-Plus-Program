/* Viết chương trình tính tiền lương ngày cho công nhân, nhập giờ vào ca, giờ ra ca của mỗi người.
Biết:
	- Tiền trả cho mỗi giờ trước 12 giờ là 6000đ và sau 12 giờ là 7500đ.
	- Giờ vào ca sớm nhất là 6 giờ sáng và giờ ra ca trễ nhất là 18 giờ (Giả sử giờ nhập vào nguyên). */

#include <stdio.h>

int main()
{
	int startHour, endHour;
	const int EARLY_RATE = 6000;
	const int LATE_RATE = 7500;

	// Nhập giờ vào và ra
	do
	{
		printf("Nhap gio vao ca (6-18): ");
		scanf("%d", &startHour);
		printf("Nhap gio ra ca (6-18): ");
		scanf("%d", &endHour);

		if (startHour < 6 || endHour > 18 || startHour >= endHour)
		{
			printf("Gio lam viec khong hop le. Vui long nhap lai!\n");
		}
	} while (startHour < 6 || endHour > 18 || startHour >= endHour);

	int salary = 0;

	// Tính lương
	for (int hour = startHour; hour < endHour; hour++)
	{
		if (hour < 12)
		{
			salary += EARLY_RATE;
		}
		else
		{
			salary += LATE_RATE;
		}
	}

	// Xuất kết quả
	printf("Tong tien luong: %d VND\n", salary);

	return 0;
}