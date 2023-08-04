/***********************************************
Author: Mariam Mahmoud
Upside down pyramid
*/
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
    for(i=1 ; i<= row ; ++i)
    {
        for(sp=1 ; sp<=i-1 ; ++sp)
        {
            printf(" ");
        }
        //can't find a relation for the stars 
    }
    return 0;
}
