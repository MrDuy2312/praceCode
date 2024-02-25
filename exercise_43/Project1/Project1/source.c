#include <stdio.h>

int main() {
	int n;
	do {
		printf("Nhap n nguyen duong:");
		int rc = scanf("%d", &n);
		if (n < 1) {
			printf("nhap lai!!");
		}
	} while (n < 1);
	int i = 0;
	while (n >= 10) {
		n = n / 10;
		i++;
	}
	printf("so luong chu so la %d", i + 1);
	return 0;
}
