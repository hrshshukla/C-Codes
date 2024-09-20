#include <stdio.h>

int main(){
    int a = 1, b = 0;

    printf("value of a AND b is %d\n", a&&b);
    printf("value of a OR b is %d\n", a||b);
    printf("value of not(b) is %d\n", !b);

    //////////////////////////////////////////////////////////////////////////////////////////////////


    if(a&&b){ // Here (a && b) means if (a && b = 1) then print "both are true"
        printf("both are true\n");
    }
    
    else
    {
        printf("one of them is not true");
    }
    
    
    // is same as writing ....
    if(a){ // Here (a) means if (a = 1) then check (b)
        if(b){ // Here (b) means if (b= 1) then check "print both are true"
            printf("both are true\n");
        }
    }

    else
    {
        printf("one of them is not true");
    }

    return 0;
}