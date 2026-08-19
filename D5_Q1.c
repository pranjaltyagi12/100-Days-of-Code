//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <math.h>
#include <stdio.h>

int main ()
{ int principal,rate,time;
float simpleinterest,compoundinterest;
printf("enter principal : ");
scanf("%d",&principal);

printf("enter rate : ");
scanf("%d",&rate);

printf("enter time : ");
scanf("%d",&time);

simpleinterest=(principal*rate*time)/100.0;
compoundinterest=principal*pow(1+rate/100.0,time)-principal;

printf("simpleinterest=%.2f\n",simpleinterest);
printf("compundinterest=%.2f",compoundinterest);

return 0 ;
}
