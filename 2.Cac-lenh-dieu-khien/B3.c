// Viết chương trình nhập vào một số nguyên, kiểm tra số vừa nhập là số chẵn hay số lẻ.

#include <stdio.h>
#include <conio.h>

void main()
{
	int n;

	printf("Nhap mot so nguyen: ");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("\nSo vua nhap la so chan");
	else
		printf("\nSo vua nhap la so le");
	getch();
}