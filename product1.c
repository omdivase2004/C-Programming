#include<stdio.h>
int main()
{
   int id=1,pid1,pid2,pid3;
   char pname1[100],pname2[100],pname3[100],cname[100],cmob[100];
   float pprice1,pprice2,pprice3,totalDiscount,discountAmt,discountPay,total;
   int pqty1,pqty2,pqty3;

   printf("Enter product 1 details:");
   pid1= i++;
   printf("\nName:");
   scanf("%s",&pname1);
   printf("\nprice:");
   scanf("%s",&pprice1);
   printf("\nqty :");
   scanf("%d",&pqty1);

   printf("Enter product 2 details:");
   pid2= i++;
   printf("\nName:");
   scanf("%s",&pname2);
   printf("\nprice:");
   scanf("%s",&pprice2);
   printf("\nqty :");
   scanf("%d",&pqty2);

   printf("Enter product 3 details:");
   pid3= i++;
   printf("\nName:");
   scanf("%s",&pname3);
   printf("\nprice:");
   scanf("%s",&pprice3);
   printf("\nqty :");
   scanf("%d",&pqty3);

   total=(pprice1*pqty1)+(pprice2*pqty2)+(pprice3*pqty3);
   if(total>10000)
   Discount=10;
   elseif(total>8000)
   Discount=8;
   elseif(total>5000)
   Discount=3;
   

   









}  