#include <stdlib.h>
#include <stdio.h>

int gcd(int, int);
int multiple_gcd(int, int*);

int main()
{
    int num1, num2;
    scanf("%i%i", &num1, &num2);
    printf("The GCD of %i and %i is %i", num1, num2, gcd(num1, num2));
    return 0;
}

int gcd(int a, int b)
{
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int multiple_gcd(int m, int *x)
{
    size_t i;
    int g;
    
    if (m < 1)
        return 0;
    g = x[0];
    for (i = 1; i < m; i++)
    {
        g = gcd(g, x[i]);
        if (g == 1)
            return 1;
    }
    return g;
}
