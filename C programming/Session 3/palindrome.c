/***************************************
date: 29.7.23
Author: Mariam Mahmoud
Description: palindrome numbers testing
*/

#include <stdio.h>
int main(void)
{
/* declaring the variables representing each number in the 5 digit no*/
int num_1;
int num_2;
int num_3;
int num_4;
int num_5;

/*the five-digit no*/
int x;

/*Receiving and scanning the number from user*/
printf("enter a five-digit number\n");
scanf("%d", &x);

/*getting the first number*/
num_1 = x/10000;
x %= 10000;

/*getting the second number*/
num_2 = x/1000;
x %= 1000;

/*getting the third number*/
num_3 = x/100;
x %= 100;

/*getting the fourth number*/
num_4 = x/10;
x %= 10;

/*getting the fifth number*/
num_5 = x;

/*testing the numbers*/
if (num_1 == num_5)
{
    if(num_2 == num_4)
    {
        printf("This number is palindrome\n");
    }
    else
    {
        printf("This number isn't palindrome\n");
    }
}
else
{
    printf("These numbers don't match a palindrome number\n");
}
return 0;
}