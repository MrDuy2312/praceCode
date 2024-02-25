#include <stdio.h>

int main() {
	int exercise42_Input;
	do {
		printf("nhap n:");
		int rc = scanf("%d", &exercise42_Input);
		if (exercise42_Input < 1) {
			printf("nhap lai!!\n");
		}
	} while (exercise42_Input < 1);

	int exercise42_Count;
	int exercise42_Check = 0;
	int exercise42_Result = 0;
	for (exercise42_Count = 1; exercise42_Count <= exercise42_Input; exercise42_Count++) {
		exercise42_Result += exercise42_Count;
		if (exercise42_Result > exercise42_Input) {
			break;
		}
		exercise42_Check = exercise42_Count;
	}
	printf("k la: %d", exercise42_Check);
	return 0;
}