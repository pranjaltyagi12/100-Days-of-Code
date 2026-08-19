//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main ()
{ int hours,minutes,seconds,totalseconds;
printf("enter totalseconds : ");
scanf("%d",&totalseconds);

hours = totalseconds/3600;
minutes = (totalseconds%3600)/60;
seconds = totalseconds % 60;

printf("hours= %d\n",hours);
printf("minutes= %d\n",minutes);
printf("seconds= %d\n",seconds);



return 0 ;
}
