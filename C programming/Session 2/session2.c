/**************************************
Author: Mariam Mahmoud
date
module
file description
file type
*/

int main(void)
{
    int n=3;
    int m=2;
    int x = 0b10101;
    x = x | (1UL << n); // set
    x = x & (~(1UL << m ));
    x = x ^ (1UL << n);
    x = (x >> 2U)
    return 0;
}