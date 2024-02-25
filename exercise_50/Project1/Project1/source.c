#include <stdio.h>
#include <string.h>
int main() {
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);
	int _res = 0;
	int _temp = 0;
	while (n != 0) {
		_temp = n % 10;
		_res = _res*10 + _temp ;
		printf("res: %d\n", _res);
		printf("temp: %d\n", _temp);
		n /= 10;
	}
	printf("dao nguoc so nguyen n la %d\n", _res);
	
	return 0;
}