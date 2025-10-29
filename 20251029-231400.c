#include <stdio.h>
int main()
{
    int a = 10;
    int b = 3;
    int c = 0;
    int m = 0;
    m = (a = 3 + b, c = 3 * a, b = c + a );
    printf("%d\n", m);
    return 0;
}