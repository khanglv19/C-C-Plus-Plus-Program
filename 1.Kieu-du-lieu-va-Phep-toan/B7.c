// Viết chương trình nhập vào chiều dài, chiều rộng của một hình chữ nhật. Hãy tính và xuất kết quả chu vi, diện tích của HCN trên.

#include <stdio.h>
#include <conio.h>

void main()
{
	float length, width;

	printf("Nhap chieu dai, chieu rong cua hinh chu nhat: ");
	scanf("%f%f", &length, &width);

	float perimeter, area;

	perimeter = (length + width) * 2;
	area = length * width;

	printf("\n\nChu vi = %.2f\t\tDien tich = %.2f", perimeter, area);
	getch();
}