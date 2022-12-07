/*Viết chương trình nhập số nguyên lớn N (khai báo: long N) có k chữ số.
- Tìm chữ số hàng đầu tiên của N
- Tính tổng các chữ số của N
- Tìm chữ số lớn nhất trong k chữ số đó
-  Đếm số chữ số của N
- N có phải là số có các chữ số khác nhau đôi một không?
Gợi ý: Áp dụng các phép toán  "/" và "%" cho 10 để lấy lần lượt từng chữ số của N
theo chiều từ chữ số hàng đơn vị đến các chữ số hàng chục, hàng trăm...
Ví dụ : N = 347285108, x = N % 10 = 8, y = N / 10 = 34728510. Lặp lại 2 phép toán chia này ta lần lượt thấy từng chữ số của N từ hàng đơn vị.
Khi đó N có :
- Chữ số hàng đầu tiên là 3.
- Tổng các chữ số : 3 + 4 + 7 + 2 + 8 + 5 + 1 + 0 + 8 = 38
- Chữ số lớn nhất là "8".
- Số chữ số của N : 9.
- N không phải số có các chữ số khác nhau đôi một vì có 2 chữ số 8.*/

