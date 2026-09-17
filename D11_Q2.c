#include <stdio.h>

int main() {
        int units; 
        float bills;
        printf("Enter units used : ");
        scanf("%d",&units);

        if (units<=100)
        {   bills = units *5;

        }
        else if(units<=200)
        {
            bills = (100*5)+(units-100)*7;   
        }
        else if(units<=300)
        {
            bills = (100*5)+(100*7)+(units-200)*10;
        }
        else
        {
               bills=(100*5)+(100*7)+(100*10)+(units-300)*12;
        }
        printf("Electricity Bill = %.2f",bills);

    return 0;

}
