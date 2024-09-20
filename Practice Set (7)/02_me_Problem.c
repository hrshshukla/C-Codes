#include <stdio.h> 
#include <unistd.h>                                                                                                                                     /*
Create a functions which can calculate that how many numbers are +ve integer in an array.
                                                                                                            */
 
int main(){
    int x;
    printf("Enter size of array :   \n");
    scanf("%d", &x);

    if (x>0)
    {   int arr[x];
       for (int i = 0; i < x; i++)
       {
           arr[i] = i + 1;
       }
        printf("There are %d positive integers in you array\nAnd the value of : \n",x);
        sleep(5);
        for (int i = 0; i < x; i++)
        {
        printf("Array [%d] is %d    \n",i,arr[i]);
        }
        
    }
    else
    {
        printf("choose a higher number\n");
    }
    return 0;
}
