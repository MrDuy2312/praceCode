// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int excercise38_Input;
    do {
        printf("Nhap n:");
        int rc = scanf("%d", &excercise38_Input);
        if (excercise38_Input < 1) {
            printf("Nhap lai\n");
        }
    } while (excercise38_Input < 1);

    int i, j;
    float excercise38_Result = 0;
    for (i = 1; i < excercise38_Input; i++){
        excercise38_Result = pow(excercise38_Result + i, 1.0 / (i + 1));
        printf("Result is: %f\n", excercise38_Result);
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
