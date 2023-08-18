#include<stdio.h>
int main(void)
{
    int x= 5;
    int *ptr=&x;
    printf("The value of X=%d\n",x);
    printf("the address of x=%p\n", &x);
    printf("The value of pointer=%d\n", *ptr);
    printf("The address of pointer=%p\n", &ptr);
    *ptr=10;
    printf("Dereferenced x=%d\n", x);


    return 0;
}