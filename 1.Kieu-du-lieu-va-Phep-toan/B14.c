/*Viết chương trình để tính tiền sân bóng đá như sau:
	- Tính tiền giờ dựa vào giờ vào và giờ ra. Mỗi giờ là 200,000.
	- Tính tiền nước uống dựa vào số bình nước đã uống. Mỗi bình nước là 20,000.
	- Tính tổng tiền: tiền giờ + tiền nước uống.*/

#include <stdio.h>
#include <conio.h>

void main()
{
	float tienGio, tienNuoc, tongTien;
	int gioVao, gioRa, soBinhNuoc;

	printf("\nNhap gio vao: ");
	scanf("%d", &gioVao);
	printf("\nNhap gio ra: ");
	scanf("%d", &gioRa);
	printf("\nNhap so binh nuoc: ");
	scanf("%d", &soBinhNuoc);

	printf("\n-------------------------------------\n");

	tienGio = (gioRa - gioVao) * 200000;
	printf("\nTien gio la: %.f", tienGio);

	tienNuoc = soBinhNuoc * 20000;
	printf("\nTien nuoc la: %.f", tienNuoc);

	tongTien = tienGio + tienNuoc;
	printf("\nTong tien la: %.f", tongTien);
	getch();
}