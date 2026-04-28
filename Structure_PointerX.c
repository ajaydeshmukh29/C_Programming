// #include<stdio.h>

// struct Demo
// {
//   int i;      // 4
//   int *ptr;   // 8

// };           // 12

// int main()
// {
//   struct Demo dobj;
//   int no = 21;

//   dobj.i = 11;
//   dobj.ptr = &no;

//   printf("%d\n", dobj.i);
//   printf("%d\n",*(dobj.ptr));
  
//   return 0;
// }


// #include<stdio.h>
// struct Demo
// {
//   float f;
//   int j;
//   char i;
//   char a;
// };
// int main()
// {
//   struct Demo dobj;
//   dobj.f = 12.0;
//   dobj.j = 13;
//   dobj.i = 'A';
//   dobj.a = 'b';
//   printf("%d\n",sizeof(dobj.i));
//   printf("%d\n",sizeof(dobj.f));
//   printf("%d\n",sizeof(dobj.j));
//   printf("%d\n",sizeof(dobj.a));
//   printf("%d\n",sizeof(dobj));
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int arr[5] = { 10, 20, 30, 40, 50};
//   int *p = &arr[2];
//   int **q = &p;
//   printf("pointer arr %d\n", p);
//   printf("pointer of p %d\n", *q);
//   return 0;
// }


#include<stdio.h>
int main()
{
  int arr[3] = {10, 20, 30};
  int *p = &arr[2];
  int *q = &p;

  printf("POinter of no is : %d\n", *p);
 printf("pinter of q is : %d", *q);
  return 0;
}