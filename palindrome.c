#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    printf("palindrome number");
    else
    printf("not palindrome");
    return 0;
    
}