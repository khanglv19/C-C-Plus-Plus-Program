// Định nghĩa cấu trúc để tính diện tích hình vuông.

#include <stdio.h>
#include <conio.h>

struct HinhVuong
{
	float edge;
};

int main()
{
	HinhVuong hv;
	float area;

	printf("\n\tNhap canh hinh vuong: ");
	scanf_s("%f", &hv.edge);

	area = hv.edge * hv.edge;

	printf("\n\tDien tich hinh vuong la: %.2f", area);
	return 0;
}