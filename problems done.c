#include<stdio.h>
#include<stdlib.h>

int main()
{
// P1.CALCULATE AREA OF A SQUARE

int side;
printf("length of side: ");
scanf("%d", &side);
int area=side*side;
printf("the area is: %d", area);

// P2.CALCULATE AREA OF CIRCLE
    
float radius;
printf("radius of the circle:  ");
scanf("%f",&radius);
float area=3.14*radius*radius;
printf("the area is: %f ", area);

//P3. IMPLICIT CONVERSION   

int num=(int) 1.9999;
printf("%d", num);

//P4.WRITE A PROGRAM TO CHECK IF A NUMBER IS DIVISIBLE BY 2

int num;
printf("type in your number: ");
scanf("%d",&num);
if(num%2==0){
    printf("number is div by 2 \n");
}
else{
    printf("number is not div by 2 \n");
}
    
//P5.PROGRAM TO SHOW PASSED/FAILED BASED OF MARKS SCORED

 float marks;
printf("marks obtained: ");
scanf("%f",&marks);
if(marks>30&&marks<=100){
    printf("passed \n");
}
else if(marks>0&&marks<=30){
    printf("failed \n");
}
else{
printf("wrong marks \n");
}   

//P6.PROGRAM TO CLASSIFY USERS AGE TO BASED CATEGORIES   
int age;
printf("type your age: ");
scanf("%d",&age);

if(age>13 && age<20){
	printf("teenager");
}

else if(age<=13){
	printf("child \n");
}
else{
    printf("adult \n");
}

//P7.PROGRAM TO CHECK NUMBER TYPED BY USER IS POSITIVE 
//AND IF POSITIVE IS IT EVEN OR ODD	
	
int number;
printf("type your number: \n");
scanf("%d",&number);

if(number >= 0){
  printf("number is positive \n");
  if(number%2==0){
    printf("number is even \n");
    }
  else{
  printf("number is odd \n");
  }
 } 
  
else { 
  printf("number is negaive \n");
} 
// P8.WRITE A PROGRAM TO FIND IF A CHARACTER IS UPPERCASE OR NOT

char ch;
printf("enter your character: ");
scanf("%c",&ch);
if(ch >= 'A'&& ch<= 'Z'){
  printf("uppercase \n");
}
else if(ch<='a' && ch>='z'){
  printf("lowercase \n");
}

else{
  printf("not alphabets \n");
}
	
    
    return 0;
}
