
/* Write a program containing a function which reverses the arr passed to it.
 Array [3] = {1,2,3}-----sending-----> function()---return---> Array [3] = {3,2,1}


__________________________________________________________________________________________________________________________________________________________*/


#include <stdio.h>
void print(int arr[], int n);
void print(int arr[], int n){ // n = no of elements. Here 6 elements
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}


void reverse(int arr[], int n);
void reverse(int arr[], int n){ 
    int temp;
    for (int i = 0; i < n/2; i++) /* (6 elements/2) = 3 iteration bcz we only need to replace each other 3 times 
                                                arr[0] = arr[5];
                                                arr[1] = arr[4]; 
                                                arr[2] = arr[3];                                                                                                                */


    {                                                                                                                                                                                          /*
        Step 1:                     Step 2:                     Step 3:
    -------------------------   -------------------------   -------------------------                                                                                                        */
       temp = arr[i];          //  temp = arr[0];              temp = arr[0];               
       arr[i] = arr[n-i-1];    //  arr[0] = arr[6-0-1];        arr[0] = arr[5];         Here arr[i]       "i" will increase the value of lower arrays from arr[0] to arr[2]
       arr[n-i-1] = temp;      //  arr[6-0-1] = temp;          arr[5] = temp;           And, arr[n-i-1]   "i" will decrease the value of higher arrays from arr[5] to arr[3]
    }
  }


int main(){ 
    int arr[]= {1,2,3,4,5,6};

    print(arr,6);
    reverse(arr,6);
    print(arr,6);
    
    return 0;
};