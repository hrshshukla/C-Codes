// Passing an array to function

#include <stdio.h>
                                                                      /*
int array(int i[]); both are same                                                                                         */
int array(int *i);

int array(int *i){
    *i = *i + 5; 
    printf("The value of array is %d\n",*i);

    int* ptr = i;
    printf("The adderess value of array is %u\n",ptr);
    return 0;
}


int main(){
    int age[]= {18, 20};
    array(&age[1]);

    printf("The adderess value of array is %u\n",&age[1]);
   
    return 0;
}