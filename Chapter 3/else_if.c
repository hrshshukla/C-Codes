#include <stdio.h>

int main(){
    int age;

    printf("Enter Age :");
    scanf("%d", &age);

    if (age>=60)
    {
        printf("You should take least risk\n");
    }
    
    else if (age>45)
    {
        printf("You should take risk sometimes \n ");
    }
    else if (age>30)
    {
        printf("You should take risk\n ");
    }
  else if (age>18)
    {
        printf("You should take calculated risk\n ");
    }

    else if (age<18){
        printf("Take more risk");
    }
     else if (age>18)
    {
        printf("You should take calculated risk\n ");
    }

    return 0;
}