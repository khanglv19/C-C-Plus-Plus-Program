// Viết chương trình nhập vào bán kính của một hình tròn. Tính và xuất kết quả chu vi, diện tích của hình tròn trên.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

int main()
{
	float radius;

	printf("Nhap vao ban kinh cua hinh tron: ");
	scanf("%f", &radius);

	float perimeter, area;

	perimeter = 2 * PI * radius;
	area = PI * pow(radius, 2);

	printf("\nChu vi = %.2f\t\tDien tich = %.2f", perimeter, area);
	return 0;
}