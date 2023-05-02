#include<stdio.h>
int main()
{
   float principle,rate,time,CI;

   printf("enter principle(amount):");
   scanf("%f",&principle);

   printf("enter time: ");
   scanf("%f",&time);

   printf("enter rate:");
   scanf("%F",&rate);

   CI=principle* (pow((1+rate/100),));

   printf("compound intrest =%f,CI");

   return 0;
   
}