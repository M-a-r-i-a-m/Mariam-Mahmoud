/********************************************
Author: Mariam Mahmoud 
Upright pryramid of stars
********************/
#include<stdio.h>
int main(void)
{
    //declaring variable in which no of rows is saved
    int row;

    //declaring the rows-counter
    int i;

    //declaring the stars-counter
    int st=0;

    //declaring the spaces-counter
    int sp;

    //taking the no of rows from the user
    printf("enter the number of rows\n");
    scanf("%d", &row);

    //looping
    for( i=1 ; i<=row ; ++i)
    {
        //spaces
        for(sp=1 ; sp<=row-i ; ++sp)
        {
            printf(" ");
            while( st != 2*i-1)
            {
                printf("*");
                ++st;
            }
            
        }
        printf("\n");
    }
    return 0;
}