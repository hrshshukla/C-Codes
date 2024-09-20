#include <stdio.h>

int main(){
int x;

                                                                                                                                                                                                                                                                                   /*
Format Specifiers = Indicates how in which format data will be displayed

                    * if its int            = integers will display         Input : int x = 10;              Output : printf("%d"); 
                    * if its unsigned int   = +ve numbers will display      Input : unsigned int x = 10;     Output : printf("%u"); 
                    * if its pointer        = memory address will display   Input : int *x = &y;             Output : printf("%p, x"); or  printf("%p, &y");  

            ( %p ) prints value of memory address (pointer)
                    * Prints memory address in hexadecimal like : 1f200cd
                    * Specially desinged to print memory address 
                    * Prints realiable address which %u cannot   
                    
                                                                                                                                                                                                                                                                              
            ( %u ) prints value in +ve number only (unsigned integer)
                    * PrintS only positive values 
                    * Represents non-negative values with a larger range compared to signed integers.
                    * Counters for loops, sizes of arrays, and other countable quantities should not be negative.
                    * Provides a way to handle larger positive values and ensures non-negative representation.


          
                

            ( %d ) means value in numbers for signed integer only otherwise garbage value


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

**POINTERS**

             int *y = &x;       // Value of pointer y or y is = address of x

                    printf("%p",y); // Print value of y = &x  in hexadecimal          Output = TF-2
                    printf("%d",y); // Not realiable address 

                    printf("%p",&y); // Print Address of y in hexadecimal             Output = BJCL450112
                    printf("%d",&y); // Error                


                    printf("%d",*y); // Print pointing value of y which is x's value        Output = 70
   
                    // Here Y is pointing to X 
                    // So it will print value of X which is 70 



                   
                    printf("%d",x); // Print Value of x in integer                    Output = 70
                    printf("%p",&x); // Print Address of x                            Output = TF-2
                    
   
   
   
   
    return 0;*/
}