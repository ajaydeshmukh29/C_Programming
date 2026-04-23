#include<stdio.h>

//extern k = 11;
int main()
{
  int i = 21;   //auto storage class
  static int j = 51;
  auto int l = 101;
  printf("%d\n",i);
  printf("%d\n",j);
  //printf("%d\n",k);

  return 0;
}