#include <stdio.h>

int main() {
	int exercise41_Input;
	do {
		printf("nhap n:");
		int rc = scanf("%d", &exercise41_Input);
		if (exercise41_Input < 1) {
			printf("Nhap lai!\n");
		}
	} while (exercise41_Input < 1);

	float exercise41_Result = 1;
	
	for (int i = 0; i < exercise41_Input; i++) {
		exercise41_Result = 1 + 1.0 / exercise41_Result;
		printf("Result is %f\n", exercise41_Result);
	}
	return 0;
}