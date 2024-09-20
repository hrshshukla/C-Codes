#include <stdio.h>
// Remake of 07_Problem 
// Print table by taking input user and using Two-Dimensional array.
// LEARNING : New way to  scanf("", &);


int main(){
    int arr[3][10];
    int n1, n2, n3;
    printf("Enter Number :  \n");
    scanf("%d\n %d\n %d\n", &n1, &n2, &n3); // LEARNING
    int mul[] = {n1, n2, n3};

    
    for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 10; j++) 
       {
            arr[i][j] = mul[i] * (j + 1);   // i = 0 until j = 10, So "i" loop will not run until "j" becomes 10 after that "i" loop will run i++ will make i = 1 and then again "j" loop will run unit j = 10 
                                            // mul[0] = 2,  mul[1]=7,  mul[2]=9
        }
    }



    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 10; j++) {
            printf("The Value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
