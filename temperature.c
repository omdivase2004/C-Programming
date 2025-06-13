#include<stdio.h>
int main()
{
    float fahrenheit,celsius,kelvin;
    printf("Enter temperature in fahrenheit");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9.0;a
    kelvin=celsius+273.15;
    printf("%.2f F is eqal to%.2f C and %.2fK\n",fahrenheit,celsius,kelvin);
    return 0;
}

