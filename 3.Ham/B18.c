/* Viết chương trình thực hiện các yêu cầu sau:
	- Nhập vào giá trị ngày, tháng, năm.
	- Kiểm tra ngày, tháng, năm có tạo 1 ngày hợp lệ theo lịch dương.
	- Nếu ngày hợp lệ thì tính ngày tiếp theo và ngày trước đó.
Ví du: 
	2/4/2012 -> hợp lệ -> ngày tiếp theo: 3/4/2012, ngày trước đó: 1/4/2012
	30/2/2011, 31/6/2010 -> không hợp lệ
	31/12/2011 -> hợp lệ -> ngày tiếp theo: 1/1/2012, ngày trước đó: 29/12/2011 */

#include <stdio.h>
#include <conio.h>

void nhapNgayThangNam(int &dd, int &mm, int &yy);
void xuatNgayThangNam(int dd, int mm, int yy);
int kiemTraNam(int yy, int mm);
int kiemTraNgay(int dd, int mm, int yy);
void soNgayTrongThang(int yy, int mm, int a);
void ngayHomTruoc(int dd, int mm, int yy);
void ngayHomSau(int dd, int mm, int yy);

void main()
{
	int dd, mm, yy;
	nhapNgayThangNam(dd, mm, yy);
	xuatNgayThangNam(dd, mm, yy);

	// Kiểm tra tháng, năm nhập vào
	if (mm>0 && mm <= 12 && yy>1){
		if (kiemTraNgay(dd, mm, yy) == 1){
			//cout << "Dinh dang ngay dung \n";
			printf("\nHop le!\n");
			ngayHomTruoc(dd, mm, yy);
			printf("\n");
			ngayHomSau(dd, mm, yy);
		}
		else /*cout << "Dinh dang ngay sai"*/ printf("\nKhong hop le!");
	}
	else /*cout << "so nam hoac so thang ko dung"*/ printf("\nNam hoac thang khong dung!");
	_getch();
}

void nhapNgayThangNam(int &dd, int &mm, int &yy)
{
	printf("Nhap ngay / thang / nam : ");
	scanf_s("%d%d%d", &dd, &mm, &yy);
}

void xuatNgayThangNam(int dd, int mm, int yy)
{
	printf("\n=============================================\n");
	printf("\n%d / %d / %d \n", dd, mm, yy);
	printf("\n=============================================\n");
}

int kiemTraNam(int yy, int mm) // Kiểm tra năm nhuận hay không nhuận
{
	if (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0)){
		return 0;// Năm nhuận
	}
	else return 1;// Năm không nhuận
}

void soNgayTrongThang(int yy, int mm, int a[13]) // Xét 1 tháng có bao nhiêu ngày
{
	int i;
	for (i = 1; i <= 12; i++){
		if (i <= 7)
			if (i % 2 != 0) a[i] = 31; // tháng 1,3,5,7 có 31 ngày
			else a[i] = 30; // tháng 2,4,6 có 30 ngày
			if (i >= 8)
				if (i % 2 == 0) a[i] = 31;//tháng 8,10,12 có 30 ngày
				else a[i] = 30;//tháng 9,11 có 30 ngày
				if (i == 2)
					if (kiemTraNam(yy, mm) == 0) a[i] = 29; // Năm nhuận thì tháng 2 có 29 ngày
					else a[i] = 28; // Năm không nhuận thì tháng 2 có 28 ngày
	}
}

int kiemTraNgay(int dd, int mm, int yy) // Kiểm tra ngày
{
	bool check;
	int a[13]; //Ð?t bi?n luu ngày trong tháng
	soNgayTrongThang(yy, mm, a);
	if (dd <= a[mm] && dd>0)
		return 1; //Ðúng
	else return 0; //Sai
}

void ngayHomTruoc(int dd, int mm, int yy)
{
	int a[13]; // Ð?t bi?n luu ngày trong tháng
	soNgayTrongThang(yy, mm, a);
	if (dd<a[mm]) dd = dd - 1; //Giảm ngày
	if (dd == a[mm])
	{
		dd = 1;
		if (mm == 12)
		{
			dd = 1;
			mm = 1;
			yy = yy - 1;
		}
		else mm = mm - 1; //Giảm năm
	}//Giảm ngày tháng    
	//cout << "\nNgay hom truoc la " << dd << "/" << mm << "/" << yy;
	printf("\nNgay hom truoc la: %d / %d / %d", dd, mm, yy);
}//Ngay hom truoc

void ngayHomSau(int dd, int mm, int yy){
	int a[13];//Ð?t bi?n luu ngày trong tháng
	soNgayTrongThang(yy, mm, a);
	if (dd<a[mm]) dd = dd + 1; //Tăng ngày
	if (dd == a[mm]){
		dd = 1;
		if (mm == 12){
			dd = 1;
			mm = 1;
			yy = yy + 1;
		}
		else mm = mm + 1; // Tăng năm
	} // Tăng ngày tháng    
	//cout << "Ngay hom sau la " << dd << "/" << mm << "/" << yy;
	printf("\nNhay hom sau la: %d / %d / %d", dd, mm, yy);
}//Ngày hôm sau