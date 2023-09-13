#include <stdio.h>
#include <stdlib.h>

 void GetMyData(int *q)
 {
    q = (int *)malloc(8);
 }
 int main()
 {
    int *p;
     GetMyData(p);
     *p = 5;
     free(p);
 }