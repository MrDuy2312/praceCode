#include <stdio.h>
//hay dem soluong chu so be nhat cua so nguyen n
int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);

	int _dem = 0;
	int _digit_max = 10;
	int _digit = 0;
	while (n != 0) {
		_digit = n % 10;
		printf("a %d\n", _digit);
		if (_digit < _digit_max) {
			_digit_max = _digit;
			_dem = 1;
			printf("b %d\n", _digit_max);
		}
		else if (_digit == _digit_max) {
			_dem++;
		}
		n /= 10;
	}
	printf("%d so luong chu so be nhat cua so nguyen n", _dem);
	return 0;
}