// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int exercise37_Input() {
    int n;
    do {
        printf("Nhap n:");
        int rc = scanf("%d", &n);

        if (n < 2) {
            printf("Nhap lai!!\n");
        }
    } while (n < 2);

    return n;
}

int main(){
    int n;
    n = exercise37_Input();
    float exercise37_Expression = 0;
    for (int i = 2; i < n + 2; i++) {
        exercise37_Expression = pow(i + exercise37_Expression, 1.0/i) ;
        printf("i is %d\n", i);
        printf("Power is %f\n", pow(i, 1.0 / i));
        printf("Expression is %f\n", exercise37_Expression);
    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
