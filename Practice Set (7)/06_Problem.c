#include <stdio.h>                                                                                                                                      /*
Create a functions which can calculate that how many numbers are +ve integer in an array.
                                                                                                            */
int count(int arr[], int n); // n = size of array
int count(int arr[], int n){
    int positive_number = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)       
        {
           positive_number ++;
        }
        
    }
    
}
int main(){
    int x;
    int arr [] = {1,2,3,4,5,6,7,8,9,10};

    printf("There are %d positive integers in you array \n",count(arr,10));
    return 0;
}