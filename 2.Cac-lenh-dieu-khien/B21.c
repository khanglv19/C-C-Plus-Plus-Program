// Viết chương trình in bảng cửu chương từ 1 -> 9 theo hàng ngang.

#include <stdio.h>
#include <conio.h>

void main()
{
	int bang1 = 1, bang2 = 2, bang3 = 3, bang4 = 4, bang5 = 5, bang6 = 6, bang7 = 7, bang8 = 8, bang9 = 9;

	for (int i = 1; i <= 10; i++)
	{
		int viTri = i;
		// CÁCH 1
		// printf("%d x %d = %d\t", bang1, viTri, bang1*viTri);
		// printf("%d x %d = %d\t", bang2, viTri, bang2*viTri);
		// printf("%d x %d = %d\t", bang3, viTri, bang3*viTri);
		// printf("%d x %d = %d\t", bang4, viTri, bang4*viTri);
		// printf("%d x %d = %d\t", bang5, viTri, bang5*viTri);
		// printf("%d x %d = %d\t", bang6, viTri, bang6*viTri);
		// printf("%d x %d = %d\t", bang7, viTri, bang7*viTri);
		// printf("%d x %d = %d\t", bang8, viTri, bang8*viTri);
		// printf("%d x %d = %d\t", bang9, viTri, bang9*viTri);

		// CÁCH 2
		for (int k = 1; k <= 9; k++)
			printf("%d x %d = %d\t", k, viTri, k * viTri);
		printf("\n");
	}
	_getch();
}