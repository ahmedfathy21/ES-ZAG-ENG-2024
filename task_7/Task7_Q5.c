#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];

  
  printf("Enter the string: ");
  fgets(str, 100, stdin);

  str[strlen(str) - 1] = '\0';

  int digit_frequency[10] = {0};

  for (int i = 0; i < strlen(str); ++i) {
    if (isdigit(str[i])) {
      int digit = str[i] - '0';
      digit_frequency[digit]++;
    }
  }
  printf("Frequency of digits:\n");
  for (int i = 0; i < 10; ++i) {
    printf("%d: %d\n", i, digit_frequency[i]);
  }
    return 0;
}
