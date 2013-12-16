#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);
int counter = 0;

void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i = 0; i < argc; i++) {
    counter = 0;
    print_letters(argv[i]);
  }
}

void print_letters(char arg[])
{
  int i = 0;

  // Use the string.h strlen function
  for(i = 0; i < strlen(arg); i++) {
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
    else {
      counter++;
    }
  }

  printf("\n");
  printf("There were %d characters I could not print\n", counter);
}

int can_print_it(char ch)
{
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
    return 0;
}

