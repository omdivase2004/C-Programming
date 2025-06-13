#include<stdio.h>
int main()
{
    float radius,area,cicumference;
    printf("\nEnter a radius");
    scanf("%f",&radius);
    area=(3.14*(radius*radius));
    cicumference=2*3.14*radius;
    printf("area of circle=%.2f\n",area);
    printf("circumference of the circle:%.2f\n",cicumference);
    return 0;

    
}