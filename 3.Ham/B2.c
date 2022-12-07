/* Kiểm tra một số nguyên x có phải là số nguyên tố không? Biết rằng số nguyên tố là số chỉ có 2 ước là 1 và chính nó.
Ví dụ: 2, 3, 5, 7, 11, 13, 17, 19, 23,... là các số nguyên tố. */

#include <stdio.h>
#include <conio.h>

int kiemTraSoNguyenTo(int);

void main()
{
	int x;
	printf("Nhap mot so nguyen X: ");
	scanf_s("%d", &x);
	int kq = kiemTraSoNguyenTo(x);
	if (kq == 1)
		printf("\n%d la so nguyen to", x);
	else printf("\n%d khong la so nguyen to", x);
	_getch();
}

int kiemTraSoNguyenTo(int x)
{
	// Đếm số ước
	int dem = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x%i == 0)
			dem++;
	}
	// Kiểm tra số nguyên tố
	if (dem == 2)
		return 1;
	else return 0;
}