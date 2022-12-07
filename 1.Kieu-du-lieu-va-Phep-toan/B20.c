//Nhập điểm thi và hệ số 3 môn Toán, Lý, Hóa của một sinh viên. Tính điểm trung bình của sinh viên đó.

#include <stdio.h>
#include <conio.h>

void main(){
    float diemToan, diemLy, diemHoa, dtb;
    
    printf("Nhap diem mon Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &diemHoa);

    dtb = (diemToan + diemLy + diemHoa) / 3;
    printf("Diem trung binh: %.2f", dtb);
    getch();
}