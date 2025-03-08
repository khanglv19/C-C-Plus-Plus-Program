/* Kiểm tra một số nguyên x có là số chính phương hay không? Biết rằng số chính phương là bình phương của một số nguyên không âm.
Ví dụ: 1 (1=1*1), 4 (4=2*2), 9 (9=3*3), 16 (16=4*4) */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int kiemTraSoChinhPhuong(int);

// int kiemTraSoChinhPhuong(int x) // Cách 1
//{
//	int i = 0;
//	while (i*i <= x)
//	{
//		if (i*i == x)
//			return 1;
//		++i;
//	}
//	return 0;
// }

int kiemTraSoChinhPhuong(int x) // Cách 2 (nhanh hơn)
{
	int can = sqrt((float)x);
	if (can * can == x)
		return 1;
	else
		return 0;
}

int main()
{
	int x;

	printf("Nhap mot so nguyen X: ");
	scanf_s("%d", &x);

	int kq = kiemTraSoChinhPhuong(x);

	if (kq == 1)
		printf("\n%d la so chinh phuong", x);
	else
		printf("\n%d khong la so chinh phuong", x);

	return 0;
}