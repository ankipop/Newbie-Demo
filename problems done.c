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
    
    
    return 0;
}
