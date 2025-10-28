#include <stdio.h>
int main()
{
    int a = 10;
    int b = 3;
    int c = 0;
    int m = a && b;
    int n = a && c;
    printf("%d\n", m);
    printf("%d", n);
    return 0;
}