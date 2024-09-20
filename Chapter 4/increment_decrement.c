#include <stdio.h>

int main(){
//Increment & Decrement Operators
        //#1 : 
            // a++ --> increse by 1
            // a-- --> decrease by 1

         //#2 : 
            // (a += 2) is same as a = a + 2 
            // (a -= 2) is same as a = a - 2 
    






    //Increment : a++
    int a = 10;
     printf("Here value of A is %d\n",a);

     a = a + 10;
     printf("Here Value of A is %d\n", a); // Output : 20 

    printf("Here Value of A is %d\n", a++); // Output : 20 becoz (post increment operator) (A) ki value ke baad (++) laga hai
                                          // toh (A) ki real value is line me print hogi, aur next line se (A) ki value 21 hojayegi 

    printf("Here value od A is %d\n", a);// Output : 21 


    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Increment : ++a

    int B = 10;
     printf("Here value of B is %d\n",B);

     B = B + 10;
     printf("Here Value of B is %d\n", B); // Output : 20 

    printf("Here Value of B is %d\n", ++B); // Output : 21 becoz (post increment operator) (B) ke pehle (++) laga hai
                                           // toh (B) ki value increse hokar,21 print hojayegi 

    printf("Here value od B is %d\n", B);// Output : 21 
    return 0;
}