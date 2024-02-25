#include <stdio.h>

//tinh tich cac chu so cua so nguyen duong.

int main() {
	int n;
	do {
		printf("nhap n:");
		int rc = scanf("%d", &n);
		if (n < 1) {
			printf("nhap lai!\n");
		}
	} while (n < 1);

	int _result = 1;

	while (n != 0) {
		_result *= n % 10;
		n = n / 10;
	}

	printf("tich cua cac so cua so nguyen duong la %d\n", _result);
	return 0;
}