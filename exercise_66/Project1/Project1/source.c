#include<stdio.h>
//giai phuong trinh ax^4 + bx^2 + c = 0
#include<math.h>
float Nhap_n() {
	float a;
	printf("nhap n:");
	scanf_s("%f", &a);
	return a;
}

void Giai_Phuong_Trinh(float a, float b, float c) {
	if (a = 0) {
		if (b = 0) {
			if(c = 0){
				printf("co vo so nghiem thuoc tap hop R\n");
			}
			printf("vo ly tren R\n");
		}
		else{
			float Trung_gian = -c / b;
			if (Trung_gian < 0)
			{
				printf("vo nghiem thuoc tap hop R");
			}
			else {
				printf("co 2 nghiem tren tap hop R\n");
				printf("x1 la %.2f\n", sqrt(Trung_gian));
				printf("x2 la %.2f\n", -sqrt(Trung_gian));
			}
		}
	}
	else {
		if (b = 0) {
			if (c = 0) {
				printf("co 1 nghiem la 0\n");
			}
			else {
				float Trung_gian = -c / a;
				if (Trung_gian < 0) {
					printf("vo nghiem\n");
				}
				else {
					printf("co 2 nghiem\n");
					printf("x1 : %.2f\n", sqrt(Trung_gian));
					printf("x1 : %.2f\n", -sqrt(Trung_gian));
				}
			}
		}
		else {
			float Delta = pow(b, 2) -  4*a*c;
		}
	}
}
int main() {
	float a, b, c;
	a = Nhap_n();
	b = Nhap_n();
	c = Nhap_n();
	Giai_Phuong_Trinh(a, b, c);
	return 0;
}