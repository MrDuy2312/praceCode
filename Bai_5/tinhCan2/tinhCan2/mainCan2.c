#include<stdio.h>
#include<math.h>

int main() {
	int n;
	do {
		printf("nhap n:");
		scanf_s("%d", &n);
		if (n < 1) {
			printf("nhap lai!!\n");
		}
	} while (n < 1);

	int i;
	float s = sqrt((float)2);
	for (i = 1; i <= n; i++) {
		s = sqrt(2 + s);
		printf("dap so la: %.4f\n", s);
	}
	return 0;
}