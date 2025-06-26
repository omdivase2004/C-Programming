#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number");
    scanf("%d",&n);
    flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%1==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("prime number");
    else
    printf("not prime number");
    return 0;
}