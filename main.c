#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    unsigned char *p_limit_table;
    unsigned char **p;
    int age, age_step, member, temp, sum;
     printf("20대부터 시작해서 연령층이 몇 개인가요 : ");
     scanf("%d",&age_step);
     p_limit_table = (unsigned char *) malloc(age_step);
     p = (unsigned char **) malloc(sizeof(unsigned char *) * age_step);

    for(age = 0; age < age_step; age++)
    {
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n",age + 2);
        printf("이 연령대는 몇 명입니까? : ");

        scanf("%d",&temp);
        *(p_limit_table + age) = (unsigned char)temp;
        *(p+age) = (unsigned  char *)malloc(*(p_limit_table+age));
        for(member = 0; member < *(p_limit_table + age); member++)
        {
            printf("%dth : ",member + 1);

            scanf("%d", &temp);
            *(p[age]+member) = (unsigned char)temp;
        }
    }
     printf("\n\n연령별 윗몸 일으키기 휫수\n");
    for(age = 0;age < 3; age++)
    {
        sum = 0;
        printf("%d0대 : ",age +2);
        for(member = 0; member < *(p_limit_table+age); member++)
        {
            sum = sum + *(*(p + age)+member);
        }
        printf("%5.2f\n", (double)sum / *(p_limit_table + age));
        free(*(p + age));
    }
    free(p);
    free(p_limit_table);
 }