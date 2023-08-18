/*code that prints the maximum number in an array*/

#include<stdio.h>

int Find_the_greatest(int arr[], int size);
int i;
int arr[10];
int size = sizeof(arr)/sizeof(arr[0]);

int main(void)
{
int max= arr[0];
printf("enter the array\n");
for (i=0 ; i<10 ; ++i)
{
    scanf("%d", &arr[i]);
}

max= Find_the_greatest(arr[10],size);

return 0;
}

int Find_the_greatest (int arr[10], int size)
{
    int max= arr[0];
    for(i=0 ; i<10 ; ++i)
    {
        if(arr[i] > max)
        {
            max= arr[i];
        }
        printf("The greatest number is %d", max);
    }

}

//selection sort
/*int Selection_Sort(int arr[6]);
int main (void)
{
    int arr[6]={7,5,8,3,1,10};
    int sorted;
    sorted= Selection_Sort( arr[6] );
    printf("Sorted array is %d\n", sorted);
    return 0;
}
int Selection_Sort(int arr[6])
{
    int x;
    for(i=0 ; i<7 ; ++i)
    {
        x= arr[i];
        if( x > arr(i+1))
        {
            x= arr[i+1];
             

        }
    }
}*/




