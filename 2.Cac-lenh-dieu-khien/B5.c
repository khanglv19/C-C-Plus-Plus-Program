// Viết chương trình nhập vào hai số a, b. Kiểm tra a có là bội số của b không.

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b;

	printf("Nhap hai so a, b: ");
	scanf("%d%d", &a, &b);

	if (a % b == 0)
		printf("\n%d la boi cua %d", a, b);
	else
		printf("\n%d khong la boi cua %d", a, b);
	getch();
}