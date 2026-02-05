#include <stdio.h>

void main ()
{
    int x, y, gcd, min, i;
    printf ("Enter two numbers;");
    scanf ( "%d", &x );
    scanf ( "%d", &y);
    if (x > y)
    { 
        min= x;
}
else
{
    min= y;
}
for (int i= 2; i<= min; i++)
{
    if ((x % i == 0) && (y % i == 0))
    {
        gcd= i;
        printf ("GCD of two numbers: %d\n", gcd);
    }
}
}
