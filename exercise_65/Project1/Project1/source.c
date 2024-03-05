#include<stdio.h>
#include<math.h>
#include<stdbool.h>
//giai phuong trinh bac 2 : ax^2 + bx + c = 0

int nhapThamSo() {
	int _Num = 0;
	printf("nhap so:");
	scanf_s("%d", &_Num);
	return _Num;
}
bool kiemTraSo(float a, float b, float c) {
	if (a == 0 && b == 0 && c == 0) {
		return false;
	}
	if (a == 0 && b == 0) {
		return false;
	}
	return true;
}
int giaiPhuongTrinh(float a, float b, float c) {
	//a = 0 => bx + c = 0

	if (a == 0) {
		if (b == 0) {
			printf("a = 0, b = 0 thi vo nghiem\n");
			if (c = 0) {
				printf("nghiem la vo cuc trong R");
			}
		}
		else if (b != 0) {
			float _trungGian = (float) - c / b;
			printf("a = 0, b khac 0 thi x = %f\n", _trungGian);
		}
	}
	else if (a != 0) {
	//a != 0 thi ax^2 + bx + c = 0
		float delta = (float)pow(b, 2) - (4 * a * c);
		printf("delta la %f\n", delta);
		if (delta == 0) {
			float _x = (float)-b / 2 * a;
			printf("delta = 0 thi phuong trinh la nghiem kep\n");
			printf("x = %f\n", _x);
		}
		else if(delta > 0) {
			float _x = (float)(-b + sqrt(delta)) / 2 * a;
			float _y = (float)(-b - sqrt(delta)) / 2 * a;
			printf("delta lon hon 0 thi phuong trinh co 2 nghiem\n");
			printf("x1 = %f\n", _x);
			printf("x2 = %f\n", _y);
		}
		else {
			printf("delta nho hon 0 thi phuong trinh vo nghiem");
		}
	}
	return 0;
}
int main() {
	float a, b, c;
	a = nhapThamSo();
	b = nhapThamSo();
	c = nhapThamSo();
	giaiPhuongTrinh(a, b, c);
	return 0;
}
