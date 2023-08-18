#include<stdio.h>
int Add (int x , int y);

int (*myfun)(int ,int )= Add ;
int x;
int y;
int main (void) 
{
    int z = (myfun)(1,2);
    printf("sum equals %d",z);
    return 0;
}
int Add (int x , int y)
{
    return x+y;
}