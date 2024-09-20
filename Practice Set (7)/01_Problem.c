#include <stdio.h>
// Print the address of array using pointer 
// Atso print +3rd position value of array with address using pointer 

int main(){
    int a [] = {1,2,3,4,5,6,7,8,9,0};

    int* ptr = a;

    printf("The value of address of %u is %d\n",ptr, *(ptr));
    printf("The value of address of %u is %d\n",ptr +3, *(ptr+3));//  address will increase by = 4 bytes x 3 positions = 12 
                                                                  // ptr    = 6422260 and 
                                                                  // ptr +3 = 6422272  (+12)

    return 0;
}