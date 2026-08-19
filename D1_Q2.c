//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main ()
{int  a,b,sum,difference,product,division;
printf("enter a : ");
scanf("%d",&a);

printf("enter b :");
scanf("%d",&b);

sum=a+b;
difference=a-b;
product=a*b;
division=a/b;

printf("sum=%d\n",sum);
printf("difference=%d\n",difference);
printf("product=%d\n",product);
printf("divison=%d\n",division);

return 0 ;
}