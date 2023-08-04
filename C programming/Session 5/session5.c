#include<stdio.h>

/*int Add(int num1 , int num2); 

int main(void)
{
    int x= Add(20,10);
    printf("%d", x);
}



int Add(int num1 , int num2)
{
    int z;
    z= num1+num2;
    return z; // or return num1 + num2 without z
}*/

/*int fun(int n)
{
    if(n>0)
    {
        fun(--n);
        printf("%d",n);
        fun(--n);
    }
}

int main(void)
{
    int a=3;
    fun(a);
    return 0;
}*/

/*char a= 0xFB;
unsigned char b= 0xF;
if (a==b)
{
    printf("equal");
}
else
{
    printf("not equal\n");
}*/

//factorial

int Fact(int x);

int main(void)
{
    int x;
    printf("enter the number");
    scanf("%d", &x);
    int z = Fact(x);
    printf("%d",z);
}
int Fact (int x)
{
    int i ;
    int f=1;
    for(i=1 ; i<=x ; ++i) 
    {
        f=f*i;
    }
    return f;
}
