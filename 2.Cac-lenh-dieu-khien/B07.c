// Viết chương trình giải phương trình bậc 1 (ax + b = 0).

#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;

	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);

	float x;

	if (a == 0)
	{
		if (b == 0)
			printf("\nPhuong trinh vo so nghiem");
		else
			printf("\nPhuong trinh vo nghiem");
	}
	else
	{
		x = -b / a;
		printf("\nPhuong trinh co nghiem la %.f", x);
	}
	return 0;
}