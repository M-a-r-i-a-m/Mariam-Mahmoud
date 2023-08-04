/***************************************
Author: Mariam mahmoud
the user enters 10 numbers and the program gets their sum and average
******************************/
#include<stdio.h>
int main(void)
{
int i;
int num;
int sum=0 ;
int average;
for ( i=1 ; i<=10 ; ++i)
{
    printf("enter number %d\n", i);
    scanf("%d", &num);
    sum= sum + num;
}
average= sum/10;
printf("sum equals %d\n", sum);
printf("average equals %d\n", average);
return 0;
}