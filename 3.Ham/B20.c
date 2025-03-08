/* Nhập N (N>100.000). Kiểm tra nếu nhập sai thì yêu cầu nhập lại. Có 3 loại tiền 5000, 10.000 và 20.000.
Xuất các cách trả N tiền từ 3 loại tiền trên. */

#include <stdio.h>

int main()
{
	int N;

	// Nhập số tiền N (phải lớn hơn 100.000)
	do
	{
		printf("Nhap so tien N (N > 100000): ");
		scanf("%d", &N);
		if (N <= 100000)
		{
			printf("So tien khong hop le. Vui long nhap lai!\n");
		}
	} while (N <= 100000);

	printf("Cac cach tra %d dong bang 3 loai tien 5000, 10000 và 20000:\n", N);

	// Duyệt qua các trường hợp
	for (int t20 = 0; t20 * 20000 <= N; t20++)
	{
		for (int t10 = 0; t10 * 10000 <= N - t20 * 20000; t10++)
		{
			int remaining = N - (t20 * 20000 + t10 * 10000);
			if (remaining % 5000 == 0)
			{
				int t5 = remaining / 5000;
				printf("%d to 20000, %d to 10000, %d to 5000\n", t20, t10, t5);
			}
		}
	}

	return 0;
}