#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    i=2;
    while (i<=n)
    {
        fact=fact*i;
        i++;
        
    }
    printf("factorial is %d",fact);
    return 0;
}