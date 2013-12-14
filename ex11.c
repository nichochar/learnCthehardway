#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv

  int i = 0;
  while(i<argc){
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // let's make our own array of strings
  
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  int num_states = 4;
  i = 0; // watch for this
  while(i<num_states){
    printf("State %d: %s\n", i, states[i]);
    i++;
  };

  int j = 0;
  char *argument_values[argc];
  while(j<argc){
    argument_values[j] = argv[j];
    j++;
  };

  j = 0;
  while(j<argc){
    printf("Argument value: %s\n", argument_values[j]);
    j++;
  }

  return 0;
}
