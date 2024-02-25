#include <stdio.h>
//kiem tra so nguyen duong n co toan chu so le hay hong

int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);

	int _rem;
	while (n != 0) {
		_rem = n % 10;
		if (_rem % 2 != 0) {
			printf("so nguyen duong n ko phai toan chu so chan!\n");
			break;
		}
		else {
			n = n / 10;
		}
	}
	if (n == 0) {
		printf("so nguyen duong n co toan chu so chan!\n");
	}
	return 0;
}