#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];

  // Get the string from the user
  printf("Enter the string: ");
  fgets(str, 100, stdin);

  // Remove the trailing newline character
  str[strlen(str) - 1] = '\0';

  // Define an array to store the frequency of each digit
  int digit_frequency[10] = {0};

  // Iterate through each character in the string
  for (int i = 0; i < strlen(str); ++i) {
    // Check if the character is a digit
    if (isdigit(str[i])) {
      // Convert the character to an integer and increment the corresponding frequency
      int digit = str[i] - '0';
      digit_frequency[digit]++;
    }
  }

  // Print the frequency of each digit
  printf("Frequency of digits:\n");
  for (int i = 0; i < 10; ++i) {
    printf("%d: %d\n", i, digit_frequency[i]);
  }
    return 0;
}
