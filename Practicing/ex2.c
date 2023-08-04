/**********************************************
Author: Mariam mahmoud 
receives two numbers and prints their sum but never stops till the user closes the window
*************************/
#include <stdio.h>
int main(void)
{
    int x;
    int y;
    for ( ; ; )
    {
        printf("please enter the first number\n");
        scanf("%d", &x);
        printf("please enter the second number\n");
        scanf("%d", &y);
        printf("the result equals %d\n", x+y);
    }
    return 0;
}