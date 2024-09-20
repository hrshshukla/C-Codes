#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(0));
    int guess;
    int random_number = (rand() % 100) +1;
    int number_of_guesses = 0;

   

  do
  {
     printf("Guess the number :  ");
     scanf("%d", &guess);

   
    
    if ( guess > random_number )     
    {
        printf("Choose Lower Number\n");
    }
    else if ( guess < random_number)
    {
        printf("Choose Higher Number\n");
    }
    else
    {
        printf("Congratulation!!");
    }
    
    number_of_guesses ++;
  } while (random_number != guess);
  
    printf("You got the number in %d guesses",number_of_guesses);

    return 0;
}