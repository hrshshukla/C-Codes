/* QUICK_QUIZ : 
>> Create a 2-d array by taking input form user.
>> Write a display function to print the content of this 2-d array                                          */

#include <stdio.h>


int main(){

    int array [3] [2];
    for (int i = 0; i < 3; i++) // To get input of array [3] means 3 rows
        {
            for ( int j = 0; j < 2; j++) // To get input of array [2] means 2 column
            {
                printf("Enter the Value of Array [%d] and [%d] \n",i,j); // To get double input use double for loop and double scanf value  like[i],[j]
                scanf("%d", &array[i][j]);
            }

        }

        for (int i = 0; i < 3; i++) 
        {
            for ( int  j = 0; j < 2; j++)
            {
                printf("The Value of Array %d and %d is %d \n",i,j,array[i][j]); // print the list of array 
            }

        }


    return 0;
}