//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main ()
{float Celsius,fahrenheit;
printf("enter Celsius : ");
scanf("%f",&Celsius);

fahrenheit=(9.0/5.0*Celsius)+32;

printf("fahrenheit=%f",fahrenheit);

return 0 ;
}
