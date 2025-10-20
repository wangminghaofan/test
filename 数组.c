#include <stdio.h>
int main()
{
  char arr1[] = "abc";
  char arr2[] = {'a','b','c','\0'};
  printf("%s\n%s",arr1,arr2);
  return 0;
}