/*Nhập vào 2 số nguyên a và b, nhập vào một phép toán +, -, *, /.
Hãy in ra màn hình kết quả của phép toán vừa nhập với 2 số hạng là a, b đã nhập.*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b;
	char op;
	float result;

	printf("Nhap vao hai so nguyen: ");
	scanf("%d %d", &a, &b);
	printf("Nhap vao phep toan ban (+, -, *, /): ");
	scanf(" %c", &op); // Thêm một khoảng trắng trước %c để loại bỏ ký tự xuống dòng

	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b == 0)
		{
			printf("Khong the chia cho 0\n");
		}
		result = (float)a / b; // Ép kiểu a về float để có kết quả chính xác
		break;
	default:
		printf("Phep toan khong hop le\n");
	}

	printf("Ket qua cua %d %c %d la: %.2f\n", a, op, b, result);
	getch();
}