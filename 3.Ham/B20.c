/* Nhập N (N>100.000). Kiểm tra nếu nhập sai thì yêu cầu nhập lại. Có 3 loại tiền 5000, 10.000 và 20.000. 
Xuất các cách trả N tiền từ 3 loại tiền trên. */

#include <stdio.h>
#include <conio.h>

void kiemTraN(float);

void main()
{
	float n;
	printf("Nhap so tien: ");
	scanf_s("%f", &n);
	kiemTraN(n);
	_getch();
}

void kiemTraN(float n)
{
	while (n <= 100.000)
	{
		if (n <= 100.000)
		printf("\nMoi nhap lai!");
	}
}