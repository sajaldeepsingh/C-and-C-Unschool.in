#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,sum=0;
    do
    {
        printf("Enter a number:");
        scanf("%f",&p);
        sum=sum+p;
    }
    while(p!=0);
    printf("Sum of all entered number is:%f",sum);
    return 0;
}
