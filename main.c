#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    char *p_name;
    p_name = (char *)malloc(32);
    if(p_name != NULL)
    {
        printf("Your name : ");
        scanf("%s",p_name);

        printf("Hi~ %s\n",p_name);
        free(p_name);
    }
    else
    {
        printf("memory allocation error!");
    }
 }