#include <stdio.h>

int main() {
    float a,b,profit,loss , percentage;
    printf("Enter Cost price : ");
    scanf("%f",&a);

    printf("Enter selling price : ");
    scanf("%f",&b);

    if( a<b )
{    profit = b - a;
    percentage = (profit/a) *100;

    printf("Profit = %.2f\n",profit);
    printf("Profit Percentage = %.2f",percentage);
}
    else if (a>b)
    {   loss = a-b;
        percentage = (loss/a)*100;

        printf("Loss = %.2f\n",loss);
        printf("Loss Percentage = %.2f",percentage);
    }
    else
    {printf("No profit No loss");
    }
    return 0;

}
