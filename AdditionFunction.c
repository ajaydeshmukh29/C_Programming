// #include<stdio.h>

// int Addition(int No1, int No2)
// {
//   int Ans = 0;
//   Ans = No1 + No2;
//   return Ans;
// }

// int main()
// {
//     int ret = 0;

//     ret = Addition(11,10);

//     printf("Addition is : %d\n", ret);

//   return 0;
// }

// flow--> 10 11 12 14 3 4 5 6 7 14 15 16(display)

#include<stdio.h>
int Multiplication(int No1, int No2)
{
  int Ans = 0;
  Ans = No1 * No2;
  return Ans;
}

int main()
{
  int ret = 0;
  ret = Multiplication(2,4);
  printf("Multiplication is : %d\n", ret);
  return 0;
}