#include <stdio.h>

int main(){
    int marks[90]; //90 students 

    marks [0] = 20; // should start from 0 
    marks [89] = 5; // 89 is max bcoz (n-1) applies here 
    printf("The Marks of student 1 is  %d and 90 is %d\n",marks[0], marks[89]);
    return 0;
}