#include <stdio.h>

int main(){
    int marks[5]; 
    int i = 0;

    for (int a = 0; a < 5; a++)
    {
        printf("Please enter marks of %d student\n",a); // Please enter marks of 1 student 
        scanf("%d", &marks[a]);                         // assign the input to marks[1]
    }                                                   // this loop will repeat till marks[0] to marks[4]
    
    for (int a = 0; a < 5; a++)
    {
        printf("Marks of student %d is %d\n",a,marks[a]); // this will print marks of student marks[0] to marks[5]
    }
    
    printf("marks of student 1 is %d and marks of student 2 is %d\n",marks[1], marks[2]); //another way to print marks
    return 0;
}