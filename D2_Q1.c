//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main ()
{int length,breadth,area,perimeter;
printf("enter length : ");
scanf("%d",&length);

printf("enter breadth : ");
scanf("%d",&breadth);

perimeter=2*(length+breadth);
area=length*breadth;

printf("perimeter=%d\n",perimeter);
printf("area=%d\n",area);

return 0 ;
}