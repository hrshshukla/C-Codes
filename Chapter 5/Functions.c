#include <stdio.h>
//Functions means block of code made to reuse it any number of times.

int sum(int x, int y){
    printf("The sum is %d \n", x+y);
    return x+y;
};



int main(){ // --> is also a function


int c = 2;
int d = 4;

sum(c,d); // Function Call 

  // **IMPORTANT** this function will pause (int main) function and look for (int sum) function
                            // After that it will provide value of c and d to (int sum)
                            // And int sum will use (return x+y) 
                            // To return the final output to sum(c,d)


////////////////////////////////////////////////////////////////////////////////////////////












                                       //   x and y  Parameters                          : int sum(int x, int y)   
//                                          |     |                                                                                   
int c = 2;                            //    v     v                                         
int d = 4;                           //     2     4  Arguments                            : sum(2,4);                                                         

sum(c,d);//     Output = 6
// sum(2,4);    Output = 6


/////////////////////////////////////////////////////////////////////////////////////////



int e = sum(c,d);
printf("Value of %d",e);





return 0;
}