#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter any three number: ");
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    printf("Sum of %d+%d+%d is %d",a,b,c,sum);
    return 0;
}
