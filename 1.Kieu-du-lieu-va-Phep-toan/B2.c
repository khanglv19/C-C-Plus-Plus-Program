// Viết chương trình đổi nhiệt độ từ đơn vị F(Feralit) ra độ C(Celsius) theo công thức : C = 5 / 9 (F-32)

#include <stdio.h>
#include <conio.h>

void main()
{
	float f, c;

	printf("Nhap nhiet do F: ");
	scanf("%f", &f);

	c = 5.0 / 9.0 * (f - 32);

	printf("\nNhiet do C la: %.2f", c);
	getch();
}