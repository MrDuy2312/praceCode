#include <stdio.h>

int main(){
    int n;
    do{
        printf("nhap n:");
        if(n < 0){
            printf("nhap lai");
        }
    }while(n < 0);
}