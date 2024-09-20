#include <stdio.h>                                                                                                          /*
Other ways to initalize array                      */


int main(){
                                                                                                                            /*
First Method :

    int cgpa[0] = 9;
    int cgpa[1] = 8;
    int cgpa[2] = 7;                                                                                                        */

    int cgpa[3] = {9,8,7};

    for (int i = 0; i < 3; i++)
    {
        printf("Value of array %d is %d \n",i,cgpa[i]);
    }

                                                                                                                            /*
    Second Method :                                                                                                       */

    int cgpa[] = {9,8,7}; // also correct no need to write --> cgpa[1] cgpa[2] or cgpa[3]


    for (int i = 0; i < 3; i++)
    {
        printf("Value of array %d is %d \n",i,cgpa[i]);
    }



      
    return 0;
}