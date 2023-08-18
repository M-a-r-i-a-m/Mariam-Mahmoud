/****************************************************
Author: Mariam Mahmoud 
function-like macro practice
***********************************************/

#include<stdio.h>
#define SET_BIT(Numbrt,bit)    (Number|= (1<<bit))
#define CLR_BIT(bin) (bin &= (~(1 << shift_2)))
#define TOGGLE_BIT(bin) (bin ^= (1 << shift_1))
#define GET_BIT(bin) (bin >>= 2)

/* global variables */
int shift_1 = 3;
int shift_2 = 2;

int main(void)
{
    int bin= 0b10101;
    int x;
    int set;
    int clr;
    int toggle;
    int get;

    printf("enter the number of operation\n");
    scanf("%d", &x);
    
    if(x==1)
    {
        get= GET_BIT(bin);
        printf("Result is %d\n", get);
    }
    else if (x==2)
    {
        clr=CLR_BIT(bin);
        printf("result is %d\n", clr);
    }
    else if(x==3)
    {
        toggle=TOGGLE_BIT(bin);
        printf("Result is %d\n", toggle);
    }
    else if(x==4)
    {
        get=GET_BIT(bin);
        printf("Result is %d\n", get);
    }
    else
    {

    }

    return 0;
}
