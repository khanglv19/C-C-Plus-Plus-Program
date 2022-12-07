/*Nhập vào 2 số nguyên a và b, nhập vào một phép toán +, -, *, /.
Hãy in ra màn hình kết quả của phép toán vừa nhập với 2 số hạng là a, b đã nhập.*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, ketQua = 0;

	printf("\nNhap vao hai so nguyen: ");
	scanf_s("%d%d", &a, &b);

	char phepToan;

	printf("\nNhap vao phep toan ban muon tinh: ");
	_flushall();
	scanf_s("%C", &phepToan);

	switch (phepToan)
	{
	case '+': ketQua = a + b;
		break;
	case '-': ketQua = a - b;
		break;
	case '*': ketQua = a*b;
		break;
	case '/': ketQua = a / b;
		break;
	default:
		break;
	}
	
	printf("\nKet qua la: %d", ketQua);
	_getch();
}