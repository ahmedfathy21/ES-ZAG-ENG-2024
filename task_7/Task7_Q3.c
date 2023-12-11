#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   he array: ");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &array[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += array[i];
  }
  printf("The sum of the elements in the array is: %d\n", sum);
  free(array);
    return 0;
}
