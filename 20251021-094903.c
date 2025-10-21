#include <stdio.h>

int main()
{
    int num = 0;
    printf("努力的年数：");
    scanf("%d", &num);
    while(num < 20)
    {
        printf("努力了%d年\n", num);
        num ++;
    }
    if(num == 20)
    {
        printf("你成功了");
    }
    return 0;

}