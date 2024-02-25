// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{   
    int exercise39_Input;
    do {
        printf("Nhap n:");
        int rc = scanf("%d", &exercise39_Input);
        if (exercise39_Input < 1) {
            printf("Nhap lai:\n");
        }
    } while (exercise39_Input < 1);
    
    int i;
    int exercise39_Fact = 1;    //giai thua
    float exercise39_Result = 0;
    for (i = 1; i <= exercise39_Input; i++) {
        exercise39_Fact *= i;
        exercise39_Result = (float)pow(exercise39_Result + exercise39_Fact, 1.0/ (i + 1));
        //printf("Factorial is %d\n", exercise39_Fact);
        //printf("Root is %f\n", 1.0 / i + 1);
        //printf("Sum:%f\n", exercise39_Result + exercise39_Fact);
        printf("Result is %f\n", exercise39_Result);
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
