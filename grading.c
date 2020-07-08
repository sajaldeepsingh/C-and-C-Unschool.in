#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p;
    printf("Enter your percentage:");
    scanf("%f",&p);
    if(p>=80)
    {
        printf("Grade A\n");
    }
    else if(p<80&&p>=70)
    {
        printf("Grade B\n");
    }
    else if(p<70&&p>=60)
    {
        printf("Grade C\n");
    }
    else if(p<60&&p>=45)
    {
        printf("Grade D\n");
    }
    else if(p<45)
    {
        printf("Grade F\n");
    }
    return 0;
}
