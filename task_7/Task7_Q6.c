#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sentence[100];
  printf("Enter a sentence: ");
  fgets(sentence, 100, stdin);
  sentence[strlen(sentence) - 1] = '\0';
  char *word = strtok(sentence, " ");
  while (word != NULL) {
    printf("%s\n", word);
    word = strtok(NULL, " ");
  }
    return 0;
}
