#include<stdio.h>
#include<math.h>

int Ex69_Nhap(){
    int Nhap;
    printf("nhap so:");
    scanf("%d", &Nhap);  
    return Nhap;
}

int Ex69_Tinh(int x, int n){
    int Tinh = 0;
    for(int i = 0; i < n; i++){
        Tinh += (int)pow((-1), i)*pow(x, (2*i)+1);
        printf("S(%d,%d) : %d\n",x ,n, Tinh);
    }
    return Tinh;
}
int main(){
    int x, n;
    int Tinh = 0;
    x = Ex69_Nhap();
    n = Ex69_Nhap();
    printf("so x: %d\n", x);
    printf("so n: %d\n", n);
    Tinh = Ex69_Tinh(x, n);
    return 0;
}

