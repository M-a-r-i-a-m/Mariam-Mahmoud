#include<stdio.h>
/*functions Prototype*/
int Max(int x , int y , int z , int m);
int Min(int x , int y , int z , int m);

/*declaration of variables I made them global to have a scope all over the program*/
int x;
int y;
int z;
int m;

/*main function*/
int main(void)
{
    printf("enter four numbers\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    scanf("%d", &m);
    Max(x,y,z,m);
    Min(x,y,z,m);
}

/*Maximum Function*/
int Max(int x, int y, int z, int m)
{
    if(x>y && x>z && x>m)
    {
        printf("Max number is %d\n", x);
    }
    else if(y>x && y>z && y>m)
    {
        printf("Max number is %d\n",y);
    }
    else if(z>x && z>y && z>m)
    {
        printf("Max number is %d\n", z);
    }
    else
    {
        printf("Max number is %d\n", m);
    }
    
}

/*Minimum Function*/
int Min(int x, int y, int z, int m)
{
    if(x<y && x<z && x<m)
    {
        printf("Min number is %d\n", x);
    }
    else if(y<x && y<z && y<m)
    {
        printf("Min number is %d\n",y);
    }
    else if(z<x && z<y && z<m)
    {
        printf("Min number is %d\n", z);
    }
    else
    {
        printf("Min number is %d\n", m);
    }
    
}