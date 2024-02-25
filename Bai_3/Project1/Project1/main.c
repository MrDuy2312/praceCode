#include <stdio.h>

int main() {
	int n;  // integer is 2 or 4 bytes. 

	printf("nhap n: ");
	scanf_s("%d", &n);
	while (n < 0) {
		printf("nhap lai!\n");
		printf("nhap n: ");
		scanf_s("%d", &n);
	}

	int S = 0; 
	int i;
	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			S += i;
			printf("so Uoc la: %d\n", S);
		}
	}
	if (S == n) {
		printf("so %d la so hoan thien!/n", n);
	}
	else {
		printf("so %d la khong phai so hoan thien\n", n);
	}
	return 0;
}