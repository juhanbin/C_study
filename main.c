#include <stdio.h>

int main()
{
    int score = 92;
    char grade;
    if(score >=90)
    {
        grade='A';
        printf("점수는 %d이고 등금은 %c입니다.\n");
    }
    else
    {
        grade ='B';
        printf("점수는 %d이고 등금은 %c입니다.\n");
    }
    printf("작업 종료");
}
