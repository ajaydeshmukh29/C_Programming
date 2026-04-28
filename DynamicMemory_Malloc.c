#include<stdio.h>
#include<stdlib.h>    // For Malloc/realloc/calloc


int main()
{

  int size = 0;
  float *Marks = NULL;
  int i = 0;  // Loop Counter

  
  printf("Enter Number of elements: \n");
  scanf("%d",&size);

  
  // Dynamic Memory Allocation
  Marks = (float*)malloc(size * sizeof(float));

  printf("Enter your Marks: \n");
  

  // Iteration
  //    1       2       3
  for(i = 0; i < size; i++)
  {
     scanf("%f", &Marks[i]);    // 4
  }
     
  printf("Entered marks are : \n");
  
   //    1       2   3
  for(i = 0; i < size; i++)
  {
    printf("%f\n",Marks[i]);    // 4
  }

  free(Marks);

  return 0;
}




