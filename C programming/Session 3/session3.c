#include <stdio.h>
int main(void)
{
    /*printf("welcome to calculator app");
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
    */

    printf("welcome to calculator");
    /* the numbers used in operations*/
    float num_1;
    float num_2;
    
    /* the variable in which results are saved*/
    float result;
   
    /* the variable representing the no of operation*/
    int order_of_operation;

    /*Entering the order of operation*/
    printf("enter the order of operation you want\n");
    /*Scanning the order*/
    scanf("%d", order_of_operation);
    
    /* Entering the two numbers*/
    printf("enter the first number\n");
    printf("enter the second number\n");
    /* scanning both numbers*/
    scanf("%f", &num_1);
    scanf("%f", &num_2);
    
    /* Switch cases*/

    switch( order_of_operation )
    {
        case 1: result = num_1 + num_2;
                printf("sum equals %f \n", result);
                break;
        case 2: result = num_1 - num_2;
                printf("subtraction equals %f \n", result);
                break;
        case 3: result = num_1 * num_2;
                printf("multiplication equals %f \n", result);
                break;
        case 4: if (num_2 == 0)
                {
                    printf("please enter another second number");
                }
                else
                {
                    printf("division equals %f \n", result);
                }
    

    }




    
    return 0;
}