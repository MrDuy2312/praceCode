#include<stdio.h>
//giai phuong trinh ax +  b = 0
int nhapThamSo() {
	int _Thamso = 0;
	printf("nhap so:");
	scanf_s("%d", &_Thamso);
	return _Thamso;
}
int phuongTrinh(int a, int b) {
	float _Result = 0;
	if (a == 0) {
		printf("x = -%d", b);
	}
	else if (a != 0) {
		_Result = (float)- b / a;
		printf("x = %f", _Result);
	}
	return 0;
}
int main() {
	int a;
	int b;
	a = nhapThamSo();
	b = nhapThamSo();
	phuongTrinh(a, b);
	return 0;
}
