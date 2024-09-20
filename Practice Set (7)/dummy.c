#include <stdio.h>
// Print Multiplication table of 2,7,9
int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);   // i = 0 until j = 10, So "i" loop will not run until "j" becomes 10 after that "i" loop will run i++ will make i = 1 and then again "j" loop will run unit j = 10 
                                            // mul[0] = 2,  mul[1]=7,  mul[2]=9
        }
    }
            //    arr[0][j]= mul[0]* (0+1)

            //    arr[0][0]= 2 * (0+1)  = 2
            //    arr[0][1]= 2 * (1+1)  = 4 
            //    arr[0][2]= 2 * (2+1)  = 6
            //    arr[0][3]= 2 * (3+1)
            //    arr[0][4]= 2 * (4+1)
            //    arr[0][5]= 2 * (5+1)
            //    arr[0][6]= 2 * (6+1)
            //    arr[0][7]= 2 * (7+1)
            //    arr[0][8]= 2 * (8+1)
            //    arr[0][9]= 2 * (9+1)
}