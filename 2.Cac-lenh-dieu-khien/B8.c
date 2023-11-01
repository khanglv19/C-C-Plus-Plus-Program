// Viết chương trình giải phương trình bậc 2 (ax^2 + bx + c = 0)

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	float a, b, c;

	printf("\nNhap he so bac 2, a = ");
	scanf("%f", &a);
	printf("\nNhap he so bac 1, b = ");
	scanf("%f", &b);
	printf("\nNhap so hang tu do, c = ");
	scanf("%f", &c);

	// Kiểm tra các hệ số
	if (a == 0)
	{
		if (b == 0)
		{
			printf("\n\tPhuong trinh vo nghiem!");
		}
		else
		{
			printf("\n\tPhuong trinh co mot nghiem: x = %f", (-c / b));
		}
		return;
	}

	// Tính delta
	float delta = b * b - 4 * a * c;

	float x1;
	float x2;

	// Tính nghiệm
	if (delta > 0)
	{
		x1 = (float)((-b + sqrt(delta)) / (2 * a));
		x2 = (float)((-b - sqrt(delta)) / (2 * a));
		printf("\n\tPhuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
	}
	else if (delta == 0)
	{
		x1 = (-b / (2 * a));
		printf("\n\tPhong trinh co nghiem kep: x1 = x2 = %f", x1);
	}
	else
	{
		printf("\n\tPhuong trinh vo nghiem!");
	}
	getch();
}