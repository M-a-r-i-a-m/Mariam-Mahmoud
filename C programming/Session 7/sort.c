

/*int i;
int j;
int size= sizeof(arr)/sizeof(array[0]);
int Selection_Sort (int array[], int size);

int main(void)
{
    int array[] = {7,5,8,3,1,10};
    Selection_Sort(array,size);
    printf("the sorted array is \n");
    Print_Result(array,size);
    return 0;
}
//sorting function
int Selection_Sort (int array[], int size)
{
    int temp;
    for(i=0 ; i<size-1 ; ++i)
    {
        for(j=0 ; j<size ; ++i)
        {
            if(array[j] < array[i])
            {
                temp=array[i];
                array[i]= array[j];
                array[j]=temp;
            }
        }
    }
    
}
//printing function
void Print_Result (int array[], int size);
{
    for(j=0 ; j<size ; ++j)
    {
        printf("%d",array[j] );
    }
    printf("\n");
}*/
// Selection sort in C

#include <stdio.h>

// function to swap the the position of two elements
void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) 
{
  for (int step = 0; step < size - 1; step++) 
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) 
    {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// function to print an array
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// driver code
int main() 
{
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}




























