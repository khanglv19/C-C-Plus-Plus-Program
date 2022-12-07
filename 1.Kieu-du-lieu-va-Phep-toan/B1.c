//Viết chương trình nhập vào hai số thực. Tính và xuất kết quả tổng, hiệu, tích, thương của hai số thực vừa nhập, kết quả lấy hai số lẻ.

#include <stdio.h>
#include <conio.h>

void main()
{
	float a, b;
	printf("Nhap hai so thuc: ");
	scanf_s("%f%f", &a, &b);
	float tong = a + b;
	float hieu = a - b;
	float tich = a*b;
	float thuong = a / b;
	printf("\n");
	printf("Tong = %.2f\tHieu = %.2f\tTich = %.2f\tThuong = %.2f", tong, hieu, tich, thuong);
	_getch();
}