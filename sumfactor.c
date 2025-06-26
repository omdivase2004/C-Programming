#include<stdio.h>
int main()
{
    int num,i,cnt=0,sum=0;
    printf("Enter a number");
    scanf("%d",&num);

    printf("factor of%d",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        printf("%d",i);
        cnt++;
        sum+=i;
        }
    }
    printf("\n total factors %d\n",cnt);
    printf("sum of factors %d\n",sum);
    return 0;
}