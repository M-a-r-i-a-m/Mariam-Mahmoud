/**********************************
Author: Mariam Mahmoud
calculating the factorial of a given number
*****************************/
#include<stdio.h>
int main(void)
{
    int x;
    int i;
    int fact=1;
    printf("enter the number\n");
    scanf("%d", &x);
    for(i=1 ; i<=x ; ++i)
    {
        fact=fact*i;
    }
    printf("factorial equals %d\n", fact);
    return 0;




