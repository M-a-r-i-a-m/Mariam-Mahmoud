#include <stdio.h>
int main(void)
{
/*int x =10;
for(int i=0 ; i<10 ; ++i)
{
    printf("%d", x);
}
*/

/* getting and scanning number of rows*/
int rows;
printf("Enter the number of rows\n");
scanf("%d", &rows);

/* looping */
for(int i=0 ; i<rows ; ++i)
{
    printf("*****\n");
}




return 0;    
}