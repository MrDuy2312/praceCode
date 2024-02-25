#include<stdio.h>
//hãy tính tinh các chữ số le của sô nguyên dương n
int main() {
	int n;

	printf("nhap n:");
	int rc = scanf("%d", &n);

	int _result = 1;
	int _rem = 0;
	while (n != 0) {
		_rem = n % 10;
		if (_rem % 2 != 0) {
			_result *= n % 10;
		}
		n = n / 10;
	}

	printf("tinh cac chu so le cua so nguyen duong n la %d\n", _result);
	return 0;
}