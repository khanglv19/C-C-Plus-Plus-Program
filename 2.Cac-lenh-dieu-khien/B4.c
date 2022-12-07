/* Viết chương trình nhập vào hai số nguyên a, b. So sánh hai giá trị vừa nhập vào và xuất ra kết quả so sánh:
a lớn hơn b, a bằng b, a nhỏ hơn b. */

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b;

	printf("Nhap hai so nguyen: ");
	scanf_s("%d%d", &a, &b);

	if (a > b)
		printf("\n%d lon hon %d", a, b);
	else
	{
		if (a < b)
			printf("\n%d nho hon %d", a, b);
		else
			printf("\n%d bang %d", a, b);
	}
	_getch();
}