#include <stdio.h>

int main() {
    int a;
    printf("Enter Percentage : ");
    scanf("%d",&a);

    if( a<=100 && a>=90 )
    printf("Grade A");

    else if ( a<=89 && a>=80)
    printf("Grade B");

    else if ( a<=79 && a>=70)
    printf("Grade C");

    else if ( a <= 69 && a>=60)
    printf("Grade D");

    else
    printf("Grade F");
    return 0;

}
