#include <stdio.h>
#include<ctype.h> // for the tolower()

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("ERROR: You need one argument.\n");
    // This is how I abort a program
    // any number > 0 means exit with error
    // you can there test them with scripts to analyze the errors
    return 1;
  }

  int i = 0;
  for(i = 0; argv[1][i] != '\0'; i++) {
    char letter = tolower(argv[1][i]);

    switch(letter) {
      case 'a':
        printf("%d: 'A'\n", i);
        break;

      case 'e':
        printf("%d: 'E'\n", i);
        break;

      case 'i':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
        if(i > 1) {
          // it's only sometimes Y
          printf("%d: 'Y'\n", i);
        }
        break;

      // It is good practice to always have this. To catch missins inputs
      default:
        printf("%d: %c is not a vowel\n", i , letter);
    }
  }

  return 0;
}
