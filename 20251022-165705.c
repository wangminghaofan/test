#include <stdio.h>
Add (int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int num1;
    int num2;
    int sum;
    scanf("%d %d",&num1,&num2);
    sum = num1 + num2;
    printf("%d",sum);
    return 0;

}