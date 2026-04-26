#include<stdio.h>

int Addition(int No1, int No2)
{
  int Ans = 0;
  Ans = No1 + No2;
  return Ans;
}

int main()
{
    int ret = 0, a =0 , b = 0; 

    printf("Enter first number : \n");
    scanf("%d", &a);

     printf("Enter second number : \n");
    scanf("%d", &b);

    ret = Addition(a,b);

    printf("Addition is : %d\n", ret);

  return 0;
}

// flow--> 10 11 12 14 3 4 5 6 7 14 15 16(display)