#include <stdio.h>
//hay dem so luong chu so le cua so nguyen duong n
int main() {
	int n;

	printf("nhap n: ");
	int rc = scanf("%d", &n);

	int _dem = 0;
	int _rem;
	for (; n != 0;) {
		_rem = n % 10;
		if (_rem % 2 != 0) {
			_dem++;
		}
		n = n / 10;
	}
	printf("so luong la %d chu so le cua nguyen duong n\n", _dem);
	return 0;
}