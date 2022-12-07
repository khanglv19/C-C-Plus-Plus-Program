// Kiểm tra một số nguyên x là chẵn hay lẻ?

#include <stdio.h>
#include <conio.h>

int kiemTraSoNguyenX(int);

void main()
{
	int x;
	printf("Nhap mot so nguyen X: ");
	scanf_s("%d", &x);
	int kq = kiemTraSoNguyenX(x);
	if (kq == 1)
		printf("\n%d la so chan", x);
	else printf("\n%d la so le", x);
	_getch();
}

int kiemTraSoNguyenX(int x)
{
	if (x % 2 == 0)
		return 1;
	return 0;
}