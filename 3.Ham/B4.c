/* Kiểm tra một số nguyên x có là số hoàn thiện (còn gọi là số hoàn chỉnh, số hoàn hảo) không?
Biết rằng số hoàn thiện là số có tổng các ước của nó (trừ chính nó) bằng chính nó.
Ví dụ: 6 có các ước 1, 2, 3 và 1+2+3=6 nên 6 là số hoàn thiện.*/

#include <stdio.h>
#include <conio.h>

int kiemTraSoHoanThien(int);

void main()
{
	int x;
	printf("Nhap mot so nguyen X: ");
	scanf_s("%d", &x);
	int kq = kiemTraSoHoanThien(x);
	if (kq == 1)
		printf("\n%d la so hoan thien", x);
	else printf("\n%d khong phai so hoan thien", x);
	_getch();
}

int kiemTraSoHoanThien(int x)
{
	int tong = 0;
	for (int i = 1; i <= x / 2 ; i++)
	{
		if (x%i == 0)
			tong += i;
	}
	if (tong == x)
		return 1;
	else
		return 0;
}