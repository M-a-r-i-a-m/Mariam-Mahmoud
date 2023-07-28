#include <stdio.h>
int main(void)
{
    printf("welcome to calculator app");
    int x;
    int y;
    float z;
    int m;

    printf("Enter the no of operation you want\n");
    scanf(" %d", &m);

    if (m == 1)
    {
        printf("Enter the first no\n");
        scanf(" %d", &x);
        printf("Enter the second no\n");
        scanf(" %d", &y);
        z= x+y;
        printf("sum equals %f\n", z);
    }
    else if (m ==2)
    {
        printf("Enter the first no\n");
        scanf("%d", &x);
        printf("Enter the second no\n");
        scanf("%d", &y);
        z= x-y;
        printf("subtraction equals %f\n", z);    
    }
    else if ( m == 3)
    {
        printf("Enter the first no\n");
        scanf("%d", &x);
        printf("Enter the second no\n");
        scanf("%d", &y);
        z= x*y;
        printf("Multiplication equals %f\n", z);  
    }
    else if ( m == 4)
    {
        printf("Enter the first no\n");
        scanf("%d", &x);
        printf("Enter the second no\n");
        scanf("%d", &y);
        z= (float) x/(float) y;
        printf("Division equals %f\n", z);
    }
    else 

    
    return 0;
}