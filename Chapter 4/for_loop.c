#include <stdio.h>

int main(){

    int a = 10;
    for (int b = 0; b < a; b++){    //Details BELOW
        printf("Value of A is %d and B is %d \n ", a, b); 
    }
    

    return 0;
}



















                                 //  *1 -> Contdition Check for      : (int b = 0; b < a;  b++)    sirf (int b = 0; b < a;) hi bas run hoga abhi 
                                 //  *2 -> Phir block execute hoga   :  {
                                //                                        printf("Value of A is %d and B is %d \n ", a, b); 
                                //                                     }
    
                                //  *3 -> Code waps ayega upar       : (int b = 0; b < a; b++)     ab sirf b++ run hoga 
