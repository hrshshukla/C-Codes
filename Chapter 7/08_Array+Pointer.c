#include <stdio.h>
// Print the value of address of array using pointer


int main(){
    int marks []= {10, 20, 30, 40, 50};   
                                                                                  /*
Assign Pointer with Array :
    int* ptr = &marks[0];  both are same                                                                                */
    int* ptr = marks ;

for (int  i = 0; i < 5; i++)
{
    printf("The address value of array %d is %u \n",i,ptr);
    ptr++;// int* ptr   = marks[0]            To print marks[10]
          // int* ptr++ = marks[1]            Then,    marks[20]
}

    return 0;
}