#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sentence[100];

  // Get the sentence from the user
  printf("Enter a sentence: ");
  fgets(sentence, 100, stdin);

  // Remove the trailing newline character
  sentence[strlen(sentence) - 1] = '\0';

  // Extract each word and print it on a new line
  char *word = strtok(sentence, " ");
  while (word != NULL) {
    printf("%s\n", word);
    word = strtok(NULL, " ");
  }
    return 0;
}
