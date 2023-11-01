/*Nhập một số thực:
	- In ra phần nguyên của số thực
	- In số thực với 2 số thập phân
	- In ra 2 só thập phân của số thực (Không in phần nguyên của số thực)
	- Tính tổng phần nguyên  và 2 số thập phân của số thực.*/

/* Chúng ta có thể nhập một số thực bằng hàm scanf và lưu vào một biến kiểu float. Sau đó, chúng ta có thể in ra phần nguyên của số thực bằng cách ép kiểu số thực về kiểu int và in ra màn hình bằng hàm printf. Chúng ta có thể in số thực với 2 số thập phân bằng cách sử dụng định dạng %.2f trong hàm printf. Chúng ta có thể in ra 2 số thập phân của số thực bằng cách lấy phần dư của số thực khi chia cho 1 và nhân cho 100. Chúng ta có thể tính tổng phần nguyên và 2 số thập phân của số thực bằng cách cộng phần nguyên với 2 số thập phân. */

#include <stdio.h>
#include <conio.h>

void main()
{
	float x;

	printf("Nhap mot so thuc: ");
	scanf("%f", &x);

	int integer_part = (int)x;

	printf("Phan nguyen cua so thuc la: %d\n", integer_part);
	printf("So thuc voi 2 so thap phan la: %.2f\n", x);

	int decimal_part = (int)((x - integer_part) * 100);

	printf("2 so thap phan cua so thuc la: %d\n", decimal_part);

	int sum = integer_part + decimal_part;

	printf("Tong phan nguyen va 2 so thap phan cua so thuc la: %d\n", sum);
	getch();
}
