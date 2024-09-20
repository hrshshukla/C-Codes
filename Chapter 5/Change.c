#include <stdio.h>
int change(int a);   // Naam karan : *** change is just name the code inside change will decide the function ***
                                    
int change(int a){// <--------------------------------|                                                                                        
    a = 77;//                                         |                                          
    return 0;//----------> // nothing will return     |                                                      
};//                              |                   |                                                        
 //                               V                   |
 //                              (x)                  |          
                                                      |                      
int main(){                                           |      
                                                      |          
    int b = 10;                                       |                         
    change(b);    // providing the b_copy to change fumction

    printf("Value of b is %d ",b);// Output = 10
    return 0;
}