#include <stdio.h>
// Print table of 2, 7, 9 using Two-Dimensional array.

int main(){
    int arr[3][10];
    int mul[] = {2, 7, 9};

    for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 10; j++) 
       {
            arr[i][j] = mul[i] * (j + 1);   // i = 0 until j = 10, So "i" loop will not run until "j" becomes 10 after that "i" loop will run i++ will make i = 1 and then again "j" loop will run unit j = 10 
                                            // mul[0] = 2,  mul[1]=7,  mul[2]=9
        }
    }

    // Loop Phase : 1                          // Loop Phase : 2                          // Loop Phase : 3
    //    arr[0][j] = mul[0] * (j + 1)         //    arr[1][j] = mul[1] * (j + 1)         //    arr[2][j] = mul[2] * (j + 1)
    //    arr[0][0] = 2 * (0 + 1) = 2          //    arr[1][0] = 7 * (0 + 1) = 7          //    arr[2][0] = 9 * (0 + 1) = 9
    //    arr[0][1] = 2 * (1 + 1) = 4          //    arr[1][1] = 7 * (1 + 1) = 14         //    arr[2][1] = 9 * (1 + 1) = 18
    //    arr[0][2] = 2 * (2 + 1) = 6          //    arr[1][2] = 7 * (2 + 1) = 21         //    arr[2][2] = 9 * (2 + 1) = 27
    //    arr[0][3] = 2 * (3 + 1) = 8          //    arr[1][3] = 7 * (3 + 1) = 28         //    arr[2][3] = 9 * (3 + 1) = 36
    //    arr[0][4] = 2 * (4 + 1) = 10         //    arr[1][4] = 7 * (4 + 1) = 35         //    arr[2][4] = 9 * (4 + 1) = 45
    //    arr[0][5] = 2 * (5 + 1) = 12         //    arr[1][5] = 7 * (5 + 1) = 42         //    arr[2][5] = 9 * (5 + 1) = 54
    //    arr[0][6] = 2 * (6 + 1) = 14         //    arr[1][6] = 7 * (6 + 1) = 49         //    arr[2][6] = 9 * (6 + 1) = 63
    //    arr[0][7] = 2 * (7 + 1) = 16         //    arr[1][7] = 7 * (7 + 1) = 56         //    arr[2][7] = 9 * (7 + 1) = 72
    //    arr[0][8] = 2 * (8 + 1) = 18         //    arr[1][8] = 7 * (8 + 1) = 63         //    arr[2][8] = 9 * (8 + 1) = 81
    //    arr[0][9] = 2 * (9 + 1) = 20         //    arr[1][9] = 7 * (9 + 1) = 70         //    arr[2][9] = 9 * (9 + 1) = 90


    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 10; j++) {
            printf("The Value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
