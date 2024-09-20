#include <stdio.h>

int main(){

    int marks[5];

    for (int  i = 0; i < 5; i++)
    {
        printf("Enter the Marks of student %d   :\n",i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of address of student %d is %u\n",i,&marks[i]);
    }
                                                                                                                /*
    Output :
    The value of address of student 0 is 6422276
    The value of address of student 1 is 6422280
    The value of address of student 2 is 6422284
    The value of address of student 3 is 6422288
    The value of address of student 4 is 6422292                                                                                                                */    
    
    return 0;
}