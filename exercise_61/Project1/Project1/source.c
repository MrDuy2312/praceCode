#include <stdio.h>
//kiem tra cac chu so cua so nguyen duong n co giam tu trai sang phai hay khong
// VD: 12345
//	54321
// 54543
int kiemTraChuSo(int n) {
	int _Num;
	int _Digit = 0;
	int _Digit_Max = -1;
	int _Check = 0;
	while (n > 0) {
		_Num = n % 10;
		//_Digit = _Digit * 10 + _Num;
		if (_Num > _Digit_Max) {
			_Digit_Max = _Num;
			printf("digit:%d\n", _Num);
		}
		else if (_Num  < _Digit_Max) {
			_Check = 1;
			break;
		}
		n = n / 10;
	}
	return _Check;
}
int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);

	if (kiemTraChuSo(n) == 0) {
		printf("cac chu so cua so nguyen duong n co giam");
	}
	else if (kiemTraChuSo(n) == 1) {
		printf("k phai la so giam tu ben trai sang ben phai");
	}
	return 0;
}