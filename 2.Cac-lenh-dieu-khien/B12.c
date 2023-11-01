// Viết chương trình nhập vào hai số nguyên và lựa chọn phép toán (cộng, trừ, nhân, chia) để tính kết quả.

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, luaChon;

	printf("\tNhap hai so nguyen: ");
	scanf("%d%d", &a, &b);

	printf("\n\t\tMENU");
	printf("\n\t1. Cong");
	printf("\n\t2. Tru");
	printf("\n\t3. Nhan");
	printf("\n\t4. Chia");
	printf("\n\t0. Thoat");

	printf("\n\n\tMoi ban chon: ");
	scanf("%d", &luaChon);

	switch (luaChon)
	{
	case 1:
		printf("\n\tTong hai so la: %d", a + b);
		break;
	case 2:
		printf("\n\tHieu hai so la: %d", a - b);
		break;
	case 3:
		printf("\n\tTich hai so la: %d", a * b);
		break;
	case 4:
		printf("\n\tThuong ai so la: %.2f", (float)a / b);
		break;
	case 0:
		return;
	default:
		printf("\n\tKhong ton tai lua chon hop le!");
		break;
	}
	getch();
}