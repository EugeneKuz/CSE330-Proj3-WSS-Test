#include <stdio.h>
#include <unistd.h>

int main(void){

  volatile int SIZE = 40;
  volatile int array[SIZE];
  volatile int count = 0;

  printf("pid: %i\n", getpid());

  while(1){
      int i;
      for(i=0;i<SIZE;i++){
      array[i] = i;
      count += array[i];
    }
    sleep(1);
  }

  return count;
}
