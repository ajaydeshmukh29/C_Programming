#include<stdio.h>

struct Demo
{
  int i;      // 4
  int *ptr;   // 8

};           // 12

int main()
{
  struct Demo dobj;
  printf("Size of Object is : %lu\n", sizeof(dobj)); // 8 OR 16
  
  return 0;
}