#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // go through each string in argv
  // why am I skipping argv[0]?
  for(i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "Caliornia", NULL,
    "Washington", "Texas"
  };
  // If this is too big, we get a segmentation fault
  int num_states = 4;

  // and now iterate through it
  for(i = 0; i < num_states; i++) {
    printf("state %d: %s.\n", i+1, states[i]);
  }

  // understand the double
  printf("Letter x: %c\n", states[3][2]);

  return 0;
}
