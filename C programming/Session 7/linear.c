#include<stdio.h>
int Search(int array[], int x, int size);
int main(void)
{
    int array[]={2,4,5,11,3};
    int x;
    printf("Enter the number\n");
    scanf("%d", &x);
    int size= sizeof(array)/sizeof(array[0]);
    int result= Search(array,x,size);
    printf("the number exists in index %d\n", result);
}
int Search(int array[], int x, int size)
{
    int i;
    for(i=0 ; i<size ; ++i)
    {
        if(array[i]== x)
        {
            return i;
        }
        else
        {
            break;
        }
    }
    printf("not found\n");
}