/*Viết chương trình nhập vào 2 số nguyên x, y. Tìm ước chung lớn nhất và bội chung nhỏ nhất của chúng.
Gợi ý:
	Tìm UCLN:
		- Sử dụng thuật toán Euclid
		- Số lần lặp của bài toán không xác định -> sử dụng vòng lặp while
		- Thuật toán Euclid tìm UCLN của a và b:
			Nếu a = b thì UCLN = a
			Nếu a < b thì UCLN(a,b) = UCLN(a-b, b)
			Nếu a > b thì UCLN(a,b) = UCLN(a, b-a)
	Tìm BCNN: BCNN(a, b) = a * b / UCLN(a,b) */

/*
- Sử dụng hàm scanf để nhập vào 2 số nguyên x, y và lưu vào 2 biến kiểu int.
- Sử dụng một hàm riêng để tìm ước chung lớn nhất của 2 số bằng thuật toán Euclid. Hàm này nhận vào 2 tham số kiểu int và trả về một giá trị kiểu int. Trong hàm này, bạn có thể sử dụng một vòng lặp while để lặp cho đến khi 2 số bằng nhau. Nếu x < y thì bạn gán y = y - x. Nếu x > y thì bạn gán x = x - y. Khi kết thúc vòng lặp, bạn trả về giá trị của x hoặc y làm ước chung lớn nhất.
- Sử dụng công thức bội chung nhỏ nhất của 2 số là tích của 2 số chia cho ước chung lớn nhất của 2 số. Bạn có thể gọi hàm tìm ước chung lớn nhất trong công thức này. */

#include <stdio.h>
#include <conio.h>

// Hàm tìm ước chung lớn nhất của 2 số bằng thuật toán Euclid
int ucln(int a, int b)
{
	while (a != b)
	{
		if (a < b)
		{
			b = b - a;
		}
		else
		{
			a = a - b;
		}
	}
	return a;
}

int main()
{
	int x, y;

	printf("Nhap vao 2 so nguyen: ");
	scanf("%d %d", &x, &y);

	int u = ucln(x, y); // Gọi hàm tìm ước chung lớn nhất
	int v = x * y / u;	// Tính bội chung nhỏ nhất

	printf("UCLN cua %d va %d la: %d\n", x, y, u);
	printf("BCNN cua %d va %d la: %d\n", x, y, v);
	return 0;
}