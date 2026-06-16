#include<stdio.h>
#include<stdlib.h>

int main()
{

// PRINTING IN DIFFERENT LINES 

   /* printf("Hello world! \n");
    printf("hello world! \n");
    
    printf("hello world! \n");
   printf("hello world! \n");*/
   
   // PRINTING VARIABLES 
   
   int age=22;
   float real_number=2.15;
   char name_oneletter ='A';
   char name[]="ankita";
   
   printf("age is age \n"); //wrong
   printf("age is %d \n", age);
   printf("decimal is %f \n" ,real_number);
   printf("string is %s \n" ,name);
   printf("for one letter or character is %c \n" ,name_oneletter);
   
   
    return 0;
}