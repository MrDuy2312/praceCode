#include<stdio.h>
//hay kiem tra so nguyen duong n co tang dan ben trai qua ben phai hay hong
int kiemTraSo(int n) {
	int _soDu_Max = 10;
	int _soDu;
	int _kiemTra = 0;
	while (n > 0) {
		_soDu = n % 10;
		if (_soDu < _soDu_Max) {
			_soDu_Max = _soDu;
		}
		else if (_soDu > _soDu_Max) {
			_kiemTra = 1;
			break;
		}
		n = n / 10; 
	}
	return _kiemTra;
}
int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);

	if (kiemTraSo(n) == 0) {
		printf("So nguyen duong n co tang dan\n");
	}
	else if (kiemTraSo(n) == 1) {
		printf("So nguyen duong n khong co tang dan");
	}
	return 0;
}