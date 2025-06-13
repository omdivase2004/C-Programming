#include<stdio.h>
int main()
{
    float initial_velocity,acceleration,time,final_velocity,distance;
    printf("Enter the initial velocity(u):");
    scanf("%f",&initial_velocity);
    printf("Enter a acceleration(a)");
    scanf("%f",&acceleration);
    printf("Enter a time(t)");
    scanf("%f",&time);
    final_velocity=initial_velocity+acceleration*time;
    distance=initial_velocity*time+0.5*acceleration*time*time;
    printf("final_velocity(V)%.2f m/s\n",final_velocity);
    printf("Distance travelled(s)%.2f m\n",distance);

}