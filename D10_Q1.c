#include <stdio.h>

int main() {
        int a,b,c;
        printf("Enter sides : ");
        scanf("%d %d %d", &a ,&b, &c);

        if (a==b && b==c)
        {printf("Equilateral Triangle");
        }
        else if (a==b || b==c || c==a)
        {printf("Isosceles Traingle");
        }
        else
{        printf("scalence Traingle");
}      

    return 0;

}
