#include <stdio.h>
#include <stdlib.h>
/*
void * calloc(size_t nitems, size_t size)
Allocates space for n elements with a t size each and returns a pointer to the allocated space
It also sets allocated memory to 0 rather than some value

void * realloc(void *ptr, size_t size)
Attempts to resize memory block pointed to by ptr that was previously
allocated with malloc or calloc. Returns pointer to newly allocated memory or NULL if request fails.
*/

int main(){
  int * arr0 = calloc(3,4); // Allocate memory for 3 items of 4 bytes each
  int counter = 0;
  while (counter != 3){
    arr0[counter] = counter;
    counter += 1;
  }
  for (int i = 0; i < 3; i++){
    printf("arr0 value %d is: %d \n",i,arr0[i]);
  }

  printf("Memory is now reallocated \n");

  arr0 = realloc(arr0,0);

  if (arr0 == NULL){
    printf("arr0 is now NULL because a size of 0 was specified\n");
  }

  return 0;
}
