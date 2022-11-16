#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

int gcd(const uint8_t *Data, size_t Size)
{
    if (Size < 2) return -1; 
    int b = (int)Data[0];
    int a = (int)Data[1];
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

int gcd_int(int a, int b)
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

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{

    gcd(Data, Size);
    if( Size >= 2)
      gcd_int((int)Data[0], (int)Data[1]);
    return 0;
}
