/****************************************************************
Date: 29.7.2023
Author: Mariam Mahmoud 
*/

/* comma operator is used to evaluate the right-most value and return it to the variable
and evaluate the first other values then discard them
so if we have int x = (printf("%c", 'hello') , 8); x will have the 8 (right most), 
but also because of evaluating the first element hello will be printed*/

/***************************************
set, reset, toggle and get using assignment operator
*/

#include <stdio.h>
int main (void)
{

  /* declaring the numbers by which we'll shift */
   int shift_1 = 3;
   int shift_2 = 2;
   
   /*declaring number of operation*/
   int x;

   /* declaring the binary number*/
   int bin = 0b10101;

   /* Letting the user decide the operation by intering a number*/
   printf("please enter the no of operation\n");
   scanf("%d", &x);
   
   /*Setting, restting, toggling and getting the third bit*/
   if( x ==1 )
   {
    bin |= (1 << shift_1);
    printf("set equals %d\n", bin);
   }
   else if ( x==2)
   {
    bin &= (~(1 << shift_2));
    printf("reset equals %d\n", bin);
   }
   else if( x==3 )
   {
    bin ^= (1 << shift_1);
    printf("toggle equals %d\n", bin);
   }
   else if(x==4)
   {
    bin >>= 2;
    printf("get equals %d\n", bin);
   }
   else
   {

   }
    return 0;
}