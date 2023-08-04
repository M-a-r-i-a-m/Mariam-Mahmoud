/*************************************************************
Author: mariam mahmoud
user enters 10 numbers and then enters one of them and get the number in which the searched-on one exists
*/
#include<stdio.h>
int main (void)
{
    int i;
    int x;
    int y;
    int z=1;
    
    for(i=1 ; i<=10 ; ++i)
    {
        printf("enter number %d\n",z);
        z=z+1;
        scanf("%d", &x);
    }
    printf("enter the value to search\n");
    scanf("%d", &y);
    
    if( y==x )
    {
         printf("The value exists in number %d\n", z-1);
    }
    else
    {
         printf("this value doesn't exist\n");     
    }
   
    return 0;
}