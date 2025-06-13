#include<stdio.h>
int main()
{
    float num1,num2;
    float arithmetic_mean,harmonic_mean;
    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    arithmetic_mean=(num1+num2)/2;
    harmonic_mean=(num1*num2)/(num1+num2);
    printf("Arithmetic Mean:%2.f\n",arithmetic_mean);
    printf("Harmonic Mean %.2f\n",harmonic_mean);
    return 0;

}