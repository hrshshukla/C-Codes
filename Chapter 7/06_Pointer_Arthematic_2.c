//  #include <stdio.h>                                                                                                         /*
//    Subtraction of one pointer from another.                                                                                    */

//           int main(){
//              int days_of_week[] = {0,1,2,3,4,5,6}; 

//              int* monday = &days_of_week[1]; 
//              int* saturday = &days_of_week[6];

//           // int days_between = monday - saturday;       Output = 1-6 = -5
//              int days_between = saturday - monday;//     Output = 6-1 = 5

//              printf("%d\n",days_between);

//              return 0;
//           }


// Addition of one pointer with another.  : invalid  

// Addition of integer with pointer.  : correct
#include <stdio.h>

int main(){
   int day_in_week [] = {0,1,2,3,4,5,6};

   int* monday = &day_in_week[1];

   monday += 4;

   printf("4th Day after monday is %d\n",*monday);

   return 0;

}



