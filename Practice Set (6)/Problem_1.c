#include <stdio.h> 
                                                                             /*
* Write a program having a variable ‘i’.
* Print the address of ‘i’.
* Pass this variable to a function and print its address.
* Are these addresses same? Why 
                                                      */
int address(int* );

int address(int* ptr){
    return printf("Address of A is %p\n",ptr);
}
int main(){
    int a = 5;
    int* ptr= &a;
    

    printf("address of a is %p\n",&a);
    address(ptr);
    
    
    return 0;
}