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
