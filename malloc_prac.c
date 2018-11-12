#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, char const *argv[]) {
  printf("%s", "input memory size : ");
  int input;
  scanf ("%d", &input); // getting an input size from the user
  char * out_str = malloc (sizeof(char) * input); // allocating memory.
  int * int_arr = malloc (sizeof(int) * input);
  //===========Constructing int_arr===========================================
  for (int i = 0; i < input; i++){
    int_arr[i] = i;
  }
  //===========Constructing int_arr===========================================
  printf("size of out_str : (input * sizeof(char)) is %ld\n",sizeof(out_str));
  printf("size of int_arr : (input * sizeof(int)) is %ld\n", sizeof(int_arr));
  printf("int_arr : [");
  for (int j = 0; j < input; j++) {
    printf ("%d, ", int_arr [j]);
  }
  printf("]\n");
  free(out_str);
  free(int_arr);
  return 0;
}
