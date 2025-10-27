#include <stdio.h>
int main()
{
    int a = 10;
    int b = ++a;//先++，把a变为11，后使用
    int c = a++;//先使用a，再++，把a变为12
    printf("a:%d", a);
    printf("b:%d", b);
    printf("c:%d", c);
    return 0;
}