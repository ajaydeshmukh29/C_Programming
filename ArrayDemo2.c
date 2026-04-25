#include<stdio.h>
int main()
{


 int Arr[4] = {10, 20, 30, 40}; // member initializaton list with size

 int Brr[] = {10, 20, 30, 40}; // without size

 int Crr[4];    //member by member initialization
 Crr[0] = 10;
 Crr[1] = 20;
 Crr[2] = 30;
 Crr[3] = 40;

 printf("%d\n",Arr[0]);
 printf("%d\n",Brr[0]);
 printf("%d\n",Crr[0]);

 return 0;
}