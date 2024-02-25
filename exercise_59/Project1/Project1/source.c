#include<stdio.h>
//hay kiem tra so nguyen duong n co phai la so doi xung hay khong

int kiemTraChuSo(int n) {
	int _kTraChuSo = 0;
	int _tGian;
	while (n != 0) {
		_tGian = n % 10;
		_kTraChuSo = _kTraChuSo * 10 + _tGian;
		n = n / 10;
	}
	return _kTraChuSo;
}
int kiemTraDoiXung(int n) {
	int doiXung = 0;
	if (n == kiemTraChuSo(n)) {
		doiXung = 1;
	}
	return doiXung;
}
int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);
	if (kiemTraDoiXung(n) == 1 ) {
		printf("So nguyen duong n la so doi xung\n");
	}
	else if(kiemTraDoiXung(n) == 0) {
		printf("So nguyen duong n la so khong doi xung\n");
	}
	return 0;
}