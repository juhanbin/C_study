#include <stdio.h>

void ShowMultiplication(int step)
{
    int i;
    for(i=1;i<=9;i++)
    {
        printf("%d * %d = %d\n",step,i,i * step);
    }
}
int main()
{
    int m;
    for(m=2;m<=9;m++)
    ShowMultiplication(m);
}
