#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  int fd = 0;
  int Ret = 0;
  char Arr[] = "Marvellous_Infosystems";
  fd = open("Marvellous.txt",O_RDWR);


  
  if(fd == -1)
  {
    printf("Unable to open file\n");
  }
  else
  {
    printf("File gets open with fd : %d\n",fd);

    Ret = write(fd,Arr,11);

    printf("%d bytes gets written into the file%d\n",Ret);
  }

  close(fd);
  
  return 0;
}