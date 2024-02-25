#include <stdio.h>

/*/int timUocso(int a) {
	int iUocso = 0;
	int iNum;
	for (iNum = 0; iNum < a; iNum++) {
		if (a % iNum == 1){
			iUocso = a / iNum;
		}
	};
	return iUocso;
}
*/
int main() {
	int iNum;
	printf("nhap so nguyen duong hon lon so 0:");
	scanf_s("%d", &iNum);
	while(iNum < 0){
		printf("nhap lai!\n");
		printf("nhap so nguyen duong hon lon so 0:");
		scanf_s("%d", &iNum);
	};
	
	int i;
	int max = 1;
	for (i = 1; i <= iNum; i++) {
		if ((iNum % i == 0) && (i % 2) == 1) {
			if (i > max) {
				max = i;
			}
		}
	};

	printf("so uoc le lon nhat la: %d", max);
	return 0;
}
