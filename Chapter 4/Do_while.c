#include <stdio.h>

int main(){
    //                 While Loop                                                   |                                 Do-While
    //  • ‘while’ checks the condition & then executes the code.                    |      ‘do-while’ executes the code & then checks the condition.
                                                                                              
                                                                                              
                                                                                              
                                                                                                  //      **IMPORTANT**                                       
                                                                                                  // At least execute one time 
    int  a = 0 ;
    do
    {
        printf("Value of a is %d \n", a);
        a++;
    } while (a<=10); //just ask : Is a smaller than or equal to 10 if yes code will run again if no code stops
    
    return 0;
}