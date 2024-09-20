
#include <stdio.h>

int main(){
    //Check Weather the number is PRIME or not 
 

    //Beginner Code 

int prime = 0;
for (int i = 2; i < n; i++)                    
{                                               
   if (n%i == 0)                                
   { 
      prime=1; 
   }

}   
   
   if (prime)
   {
      printf("The %d is a not a Prime Number",n);
   }
                                                                                                                
   else
   {
      printf("The %d is a Prime Number",n);
   }























// Intermediate Code : Me

int n;
printf("Enter the number : ");
scanf("%d", &n);


for (int i = 2; i < n; i++)    //   Input = 5,  here we said to divide input number from 2 to 4 (n-1), So if 5 is divisible by 2,3,4 it is not a prime
{                                               
   if (n%i == 0)                                
   {  
   printf("The %d is a not a Prime Number",n);    
   break;                   // using break bcoz if we know that if 12 is divided by 2. That means it is divided by 1, 2 and 12 himself. hence it is not a prime 
   }    
                                                                                                                                                                   
   else
   {
      printf("The %d is a Prime Number",n);
      break;
   }
}                                                         
    return 0;          
}  



















// Pro Level Code : Harry 

int n;
int not_prime = 0 ;
printf("enter the number ");
scanf("%d", &n);

if (n==0 || n==1)
{
  not_prime=1;
}
else
{
   for (int i = 2; i < n; i++)                                                                                                                            //   Input = 5,  here we said to divide input number from 2 to 4 (n-1), So if 5 is divisible by 2,3,4 it is not a prime
      { 

      if (n%i == 0 && n!=2)        // if input is divided from any number from  2 to 4, increase value of not_prime      // n!=2  means input value me 2 nhi hona chiye aur agar hai toh (IF) FALSE dega aur ELSE apply hokar 2 is prime print kr dega .                 
         {  
            not_prime=1;   
            break;                   // Agar input teen number se divide ho rha hai, From 1, n, itself toh wo prime nhi h. So we're using break bcoz if we know 12 is divided by 2. That means it is divided by 1, 2 and 12 himself. hence it more than two divisbles
         }
      }
}
     if (not_prime)
     {
      printf("The %d is a not a Prime Number",n);
     }
                                                                                                                                                                   
   else
   {
      printf("The %d is a Prime Number",n);
   }     
  return 0;
}













