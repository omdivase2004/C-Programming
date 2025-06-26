#include<stdio.h>
int main()
{
    int cnt=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
{
    cnt++;
    n=n/10;
}
printf("cnt of digit is %d",cnt);
return 0;
}