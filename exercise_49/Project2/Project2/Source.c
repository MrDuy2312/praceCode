#include<stdio.h>
 //tim chu so dau tien cua n

int main() {
	int n;
	do {
		printf("nhap n:");
		int rc = scanf("%d", &n);
		if (n < 1) {
			printf("nhap lai!!\n");
		}
	} while (n < 1);

	int _result = 0;
	while (n != 0){
		_result = n % 10;
		n = n / 10;
	}
	printf("chu so dau tien cua n la: %d", _result);
	return 0;
}