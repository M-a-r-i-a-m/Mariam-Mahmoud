/*******************************************
Author: Mariam Mahmoud
the user enters the id, if it's wrong, the program prints you're not registered.
If it's correct, it asks for the password, if the user enters it correctly, the program prints hello. If he enters a wrong password
the program lets him re-enter it for three more times before not accepting any inputs for 5 mins.
********************************/
#include <stdio.h>
int main(void)
{
    int id;
    int pass;
    int i;

    printf("Enter your ID\n");
    scanf("%d", &id);

    if ( id == 1901 )
    {
        printf("Enter your password\n");
        scanf("%d", &pass);
        if( pass == 123)
        {
            printf("welcome to our system\n");
        }
        else 
        {
            for( i=1 ; i<=3 ; ++i)
            {
               printf("Enter your password\n"); 
               scanf("%d", &pass);
               if ( pass == 123)
               {
                printf("welcome to our system\n");
               }
               
            }
            printf("you can't try again now, wait for five minutes and try later\n");
        }
    }
    else 
    {
        printf("You're not registered\n");
    }
    return 0;
}