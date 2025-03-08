// Viết chương trình tính tổng: 1/1.2.3 + 1/2.3.4 + 1/3.4.5 +...+ 1/n(n+1)(n+2), trong đó n>0 nhập từ bàn phím.

/* Chúng ta có thể sử dụng một vòng lặp for để duyệt qua các giá trị của n từ 1 đến n và cộng dồn vào một biến kiểu float để lưu tổng. Chúng ta có thể tính được mẫu số của mỗi số hạng bằng cách nhân n với n+1 và n+2. Chúng ta có thể in ra kết quả bằng hàm printf. */

#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);

	float sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / (i * (i + 1) * (i + 2));
	}

	printf("Tong la: %.4f\n", sum);
	return 0;
}