// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int exercise40_Var_x;
    int exercise40_Var_n;
    // Nhap n
    do {
        printf("nhap n:");
        int rc_1 = scanf("%d", &exercise40_Var_n);
        if (exercise40_Var_n < 1) {
            printf("nhap lai!!\n");
        }
    } while (exercise40_Var_n < 1);

    // Nhap x
    do {
        printf("nhap x:");
        int rc_2 = scanf("%d", &exercise40_Var_x);
        if (exercise40_Var_x < 0) {
            printf("nhap lai\n");
        }
    } while (exercise40_Var_x < 0);

    float exercise40_Result = 0;
    int exercise40_Temp = 1;
    float n = -4;
    for (int i = 1; i <= exercise40_Var_n; i++) {
        exercise40_Temp = pow(exercise40_Var_x, i);
        exercise40_Result = sqrt(exercise40_Temp + exercise40_Result);
        //printf("x is %d\n", exercise40_Temp);
        printf("Result is %f\n", exercise40_Result);
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
