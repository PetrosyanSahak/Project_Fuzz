#include "gcd.h"
#include <cstddef>

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
