/* Viết chương trình cho phép người dùng chọn một trong những các thao tác sau:
	- Nhập chiều dài, chiều rộng hình chữ nhật. Xuất ra chu vi, diện tích hình chữ nhật.
	- Nhập chiều dài cạnh hình vuông. Tính và xuất ra chu vi, diện tích hình vuông.
	- Nhập vào bán kính hình tròn. Tính và xuất kết quả chu vi, diện tích hình tròn. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

int main()
{
	char chon;

	printf("\n\tMENU\n");
	printf("\n1. Hinh chu nhat");
	printf("\n2. Hinh vuong");
	printf("\n3. Hinh tron");
	printf("\n0. Thoat");
	printf("\n\nXin moi chon: ");
	scanf("%d", &chon);

	double length, width, edge, radius, perimeter, area;

	switch (chon)
	{
	case 1:
		printf("\nNhap chieu dai, chieu rong cua hinh chu nhat: ");
		scanf("%f%f", &length, &width);
		perimeter = (length + width) * 2;
		area = length * width;
		printf("\n\nChu vi = %.2f\t\tDien tich = %.2f", perimeter, area);
		break;
	case 2:
		printf("\nNhap vao canh cua hinh vuong: ");
		scanf("%f", &edge);
		perimeter = 4 * edge;
		area = edge * edge;
		printf("\nChu vi = %.2f\t\tDien tich = %.2f", perimeter, area);
		break;
	case 3:
		printf("\nNhap vao ban kinh cua hinh tron: ");
		scanf("%f", &radius);
		perimeter = 2 * PI * radius;
		area = PI * pow(radius, 2);
		printf("\nChu vi = %.2f\t\tDien tich = %.2f", perimeter, area);
		break;
	case 0:
		return;
	default:
		break;
	}
	return 0;
}