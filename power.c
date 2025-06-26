#include<stdio.h>
int main()
{
    int x,y,i,result=1;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Enter a power");
    scanf("%d",&y);
    i=1;
    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("result %d^%d=%d",x,y,result);
    return 0;
  }
