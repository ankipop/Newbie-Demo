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
 
//TO TAKE INPUT WE USE SCANF FUNCTION

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
	
//TERNARY CONDITIONING

int age;
printf("type your age: ");
scanf("%d",&age);

age>=18? printf("adult"):printf("not adult");

//SWITCH() FUNCTION 

int day_no;
printf("type the day no: ");
scanf("%d",&day_no);
switch(day_no){
  case 1 : printf("Monday \n");
    break;
  case 2 : printf("tuesday \n");
    break;
  case 3 : printf("wednesday \n");
    break;
  case 4 : printf("thursday \n");
    break;
  case 5 : printf("friday \n");
    break;
  case 6 : printf("satday \n");
    break; 
  case 7 : printf("sunday \n");
    break;   

  default : printf("not a valid day! \n");
} 

//LOOP CONTROL 
//FOR(INITIANLISATION;CONDITION;UPDATION){}

int d;
printf("no of times u wanna print hello world: ");
scanf("%d",&d);
for(int i=1;i<=d;i=i+1){
  printf("hello world! \n");
}

// INCREMENT OPERATOR i++ and ++i
int d=1;
printf("%d \n", d);
printf("%d \n",d++);//USE THEN INCREASE (POST INCREMENT)
printf("%d \n",++d);//INCREASE THEN USE	(PRE INCREMENT)
    

//DECREMENT OPERATOR i-- and --i
int d=5;
printf("%d \n", d);
printf("%d \n",d--);//USE THEN DECREASE (POST DECREMENT)
printf("%d \n",--d);//DECREASE THEN USE (PRE DECREMENT)

//WHILE(CONDITION){}
//PRINT A CHARACTER AS USER WANTS AS MANY TIMES
char ch;
printf("what to print: ");
scanf("%c", &ch);
int d;
printf("how many times to print: ");
scanf("%d",&d);
int i=1;
while(i <= d){
  printf("%c \n",ch);
  i+=1;
}

//DO{}WHILE(CONDITION);

int n;
printf("how many numbers: ");
scanf("%d",&n);
int i=1;
do{
  printf("%d \n", i);
  i++;
}while(i<=n);
printf("AND IN REVERSE \n");
do{
  printf("%d \n", n);
  n--;
}while(n>=1);

//BREAK STATEMENT 

int n;
for( ;n%2==0; ){
  printf("type a number: ");
  scanf("%d",&n);                 
  printf("%d \n", n);
    if(n%2 != 0){
      break;              //TAKES U OUT OF THE LOOP
    }
}
printf("THANK YOU");

//CONTINUE
//PRINT ALL  NUMBERS TILL USER WISHES EXCEPT FOR THE ONE USER TYPES

int n;
printf("type till number: ");
scanf("%d", &n);
  
int e;
printf("type your number dont want: ");
scanf("%d", &e);

for(int i=1;i<=n;i++){
printf("%d \n",i);
  if(i==e){
  continue;   //IGNORES THIS AND GOES BACK TO TYE LOOP
}
	
	return 0
}
