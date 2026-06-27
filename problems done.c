#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void printhello();
void printgoodbye();
void namaste();
void bonjur();
int sum(int a,int b);

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
//P9.PRINT NUMBERS AS MANY USER WANTS FROM 1

int n;
printf("till how much do u want to print numbers: ");
scanf("%d",&n);
for(int t=1;t<=n;t+=1){
  printf("%d \n", t);
}	
//P10.WRITE A PROGRAM TO PRINT HELLO WORLD AS MANY TIMES AS USER WANTS	

int d;
printf("no of times u wanna print hello world: ");
scanf("%d",&d);
for(int i=1;i<=d;i=i+1){
  printf("hello world! \n");
}

//P11.PRINT NUMBERS FROM 0 TO N USING WHILE

int n;
printf("how many numbers: ");
scanf("%d",&n);
int i=0;
while(i<=n){
  printf("%d \n", i);
  i=i+1;
}	

//P12.PRINT A CHARACTER AS USER WANTS AS MANY TIMES
	
char ch;
printf("what to print: ");
scanf("%c", &ch);
int d;
printf("how many times to print: ");
scanf("%d",&d);
int i=1;
while(i <= d){
  printf("%c \n",ch);
  i++;
}	

//P13.WRITE A CODE TO PRINT NUMBERS TILL USER WANTS AND IN REVERSE TOO

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

//P14.PRINT TABLE OF NUMBER GIVEN BY USER

//IN FOR

int n;
printf("your number: ");
scanf("%d", &n);
for(int i=1;i <= 10;i++){
  printf("%d",n);
  printf(" × %d", i);
  printf(" =%d  \n", n*i );
}

//IN WHILE

int n;
printf("your number: ");
scanf("%d", &n);
int i=1;
while(i<=10){
  printf("%d", n);
  printf("×%d=",i);
  printf("%d \n",i*n);
  i++;
}

//IN DO WHILE
int n;
printf("your number: ");
scanf("%d", &n);
int i=1;
do{
  printf("%d", n);
  printf("×%d=",i);
  printf("%d \n",i*n);
  i++;
}while(i<=10);
	
//P15.KEEP TAKING INPUTS FROM USER UP UNTIL THEY TYPE IN A ODD NUM

//IN FOR

int n;
for( ;n%2==0; ){
  printf("type a number: ");
  scanf("%d",&n);                 
  printf("%d \n", n);
    if(n%2 != 0){
      break;
    }
}
printf("THANK YOU");

//IN WHILE

int n;
while(1){
  printf("type your number: ");
  scanf("%d", &n);
  printf("%d \n", n);
  if(n%2!=0){
    break;
  }
}
printf("THANK YOU");
// IN DO WHILE

int n;
do{
  printf("type your number: ");
  scanf("%d", &n);
  printf("%d \n", n);
}while(n%2==0);
printf("THANK YOU");

//16.PRINT ALL  NUMBERS TILL USER WISHES EXCEPT FOR THE ONE USER TYPES

int n;
printf("type till number: ");
scanf("%d", &n);
  
int e;
printf("type your number dont want: ");
scanf("%d", &e);

//IN FOR

for(int i=1;i<=n;i++){
printf("%d \n",i);
  if(i==e){
  continue;
}

//17.PRINT ALL NUMBERS FROM START TO END EXCEPT ODD NUMS

int s;
int e;
printf("type start: ");
scanf("%d", &s);
printf("type end: ");
  scanf("%d", &e);
 
  
//IN FOR  
  

int i=s;
for( ;i<=e;i++){
  if(i%2!=0){
    continue;
  }
  printf("%d \n", i);
}

//OR 	
	
int i=s;
for( ;i<=e;i++){
  if(i%2==0){
    printf("%d \n", i);
  }
  else{
  continue;
  }
}

//IN WHILE

int i=s-1;
while(i<=e){
  i++;
  if(i%2!=0){
    continue;
  }
  printf("%d \n", i);
}
	
//IN DO WHILE

int i=s-1;
do{
  i++;
  if(i%2!=0){
    continue;
  }
  printf("%d \n", i);
}while(i<=e);

//18.PRINT FACTORIAL OF A NUMBER N

int n;
printf("type your number: ");
scanf("%d", &n);
int p=1;

//IN FOR
for(int i=1;i<=n;i++){
  p=p*i;
}  
printf("%d \n", p);
	
    return 0;
}

void printhello(){
   printf("hello world! \n");
}

void printgoodbye(){
  printf("goodbye! \n");
}
void namaste(){
  printf("namaste \n");
}
void bonjur(){
  printf("bonjur \n");
}

int sum(int a,int b){
  return a+b;
}
