#include<stdio.h>
#include<stdlib.h>

int main()
{

// PRINTING IN DIFFERENT LINES 

   printf("Hello world! \n");
    printf("hello world! \n");
   
    printf("hello world! \n");
   printf("hello world! \n");
   
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
 
//3.TO TAKE INPUT WE USE SCANF FUNCTION

    int a,b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("the sum is: %d", a+b);

// OR ASSIGN THE VALUE TO A VARIABLE
    int sum = a+b;
    printf("the sum is: %d", sum);

//CONDITIONAL STATEMENTS
//IF / ELSE IF/ELSE

int age;
printf("type your age: ");
scanf("%d",&age);

if(age>13 && age<20){
	printf("teenager");
}

else if(age<=13){
	printf("child");
}
else{
    printf("adult");
}
   
    return 0;
}
