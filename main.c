#include <stdio.h>

 int main()
 {
    char data[5] = {1,2,3,4,5};
    int result = 0,i;
    char *p = data;

    for(i= 0;i<5;i++)
    {
        result = result + *p;
        p++;
    }
     printf("data 배열의 가 요소의 합은 %d입니다\n",result);
 }