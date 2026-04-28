#include<stdio.h>
#include<stdlib.h>  //for malloc(), calloc(), and realloc()

int main()
{
  // int size = 0;
  // // float N = 0;
  // // int *ptr = NULL;

  // // printf("Enter Number : %d\n");
  // // scanf("%d\n",&N);

  // // ptr = (float*) malloc(size*sizeof(float));

  // float *Marks = NULL;

  // printf("Enter number of students : %d\n");
  // scanf("%d\n",&size);

  // Marks = (float*) malloc(size*sizeof(float));


  int size = 0;
  float *Marks = NULL;

  printf("Enter N size : \n");
  scanf("%f\n",size);

  Marks = (float*)malloc(size * sizeof(float));

  for(int i=0; i<size; i++)
  {
    scanf("%f\n",Marks[i]);
  }

  printf("Entered N are : \n");
  for(int i=0; i<size; i++)
  {
   printf("%f\n",Marks[i]); 
  }
  
  free(Marks);
  
  return 0;
}





// // #include<stdio.h>
// // #include<stdlib.h>

// // int main()
// // {
// //   int size = 0;
// //   int *ptr = NULL;

// //   printf("Enter a number : \n");
// //   scanf("%d",&size);

// //   ptr = (int *)malloc(size*sizeof(int));

// //   if(ptr == NULL)
// //   {
// //     printf("Memory allocation failed\n");
// //   }

// //   printf("Memory allocated successfully\n");

// //   free(ptr);
// //   return 0;
// // }





// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//   int arr;
//   int *ptr = NULL;

//   printf("Enter numbers : \n");
//   scanf("%d",&arr);

//   ptr = (int*)malloc(arr*sizeof(int));

//   if(ptr == NULL)
//   {
//     printf("Memory not allocated\n");
//   }
//   else
//   {
//     printf("Memory allocated\n");
//   }

//   free(ptr);

// return 0;
// }