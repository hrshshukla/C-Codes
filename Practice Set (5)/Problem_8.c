/* #To print 
*
***
*****                                                       */
#include <stdio.h>



int main(){
                                                                                                                                                                                    /*           
     int a ;
     printf("Enter :  ");  // How many lines of stars you want
     scanf("%d", &a);                                                                                                                                                                   */ 


    int a = 4;  // How many lines of stars you want

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2*i+1 ; j++)   //  2*i+1 to print odd numbers.......in this case 2*0+1 = 1 = * 
        {                                 //                                                 2*1+1 = 3 = ***
            printf("*");                 //                                                  2*2+1 = 5 = *****                    
        }
     printf("\n");
    }
    

    return 0;
}