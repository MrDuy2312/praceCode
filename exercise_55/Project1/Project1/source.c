#include <stdio.h>

int main() {
	int n;

	printf("nhap n:");
	scanf_s("%d", &n);
	int _res = 0;
	int _inter = n;
	int _num;
	int _dem = 0;
	while (_inter != 0) {
		_num = _inter % 10;
		_inter = _inter / 10;
		_res = _num;
		printf("a %d\n", _res);
	}

	while (n != 0) {
		_num = n % 10;
		printf("b %d\n", _res);
		if (_num == _res) {
			_dem++;
		}
		n = n / 10;
	}
	printf("so luong chu so dau tien cua so nguyen duong n la %d\n", _dem);
	return 0;
}