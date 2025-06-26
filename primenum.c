#include<stdio.h>
int main()
{
    int i,n,cnt=0;
    printf("Enter a number");
    scanf("%d",&n);
    cnt=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
       cnt++;
    }
    if(cnt==2)
    printf("prime number");
    else
    printf("not prime number");
    
    return 0;
}