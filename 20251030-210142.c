#include <stdio.h>

void test()
{
    static int a = 0;
    a ++;
    printf("%d ", a);
}



int main()
{
    int b = 0;
    while(b < 10)
    {
        test();
        b ++;
    }
        return 0;
}    