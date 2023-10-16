#include <stdio.h>

int main()
{
    int m, n;
    for(m = 5; m < 8; m++)
    {
        if(m == 6)
            continue;
        printf("m(%d)\n",m);
    }
}
