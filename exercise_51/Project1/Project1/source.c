#include <stdio.h>
//tim chu so lon nhat cua so nguyen n
int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);

	int _rem = 0;
	int _result = 0;
	while (n != 0) {
		_rem = n % 10;
		if (_rem > _result) {
			_result = _rem;
		}
		n /= 10;
	}
	printf("chu so lon nhat cua nguyen n la %d", _result);
	return 0;
}