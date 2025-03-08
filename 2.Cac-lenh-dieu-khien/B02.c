// Viết chương trình nhập vào hai số a, b.Tìm số lớn nhất giữa hai số vừa nhập(so sánh hai cách giải: dùng hàm if và biểu thức điều kiện).

#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;

	printf("Nhap hai so bat ky: ");
	scanf("%d%d", &a, &b);

	if (a > b)
		printf("\nSo lon nhat la %d", a);
	else
	{
		if (a < b)
			printf("\nSo lon nhat la %d", b);
		else
			printf("\nHai so bang nhau");
	}
	return 0;
}