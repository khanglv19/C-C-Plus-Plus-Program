/*Nhập mã ASCII. Nếu mã ASCII là của 26 chữ cái tiếng Anh (A -> Z) thì in ra kết quả là "Là chữ cái",
ngược lại thì in ra ký tự tương ứng với mã đó.*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int as;
	printf("\nNhap ma ASCII: ");
	scanf_s("%d", &as);
	((as >= 65 && as <= 90) || (as >= 97 && as <= 122)) ? (printf("La chu cai")) : (printf("Ky tu: %c", as));
	_getch();
}