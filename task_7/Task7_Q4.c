#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("Invalid size!\n");
    return 1;
  }
  int *array = malloc(n * sizeof(int));
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &array[i]);
  }
  for (int i = 0; i < n / 2; ++i) {
    int temp = array[i];
    array[i] = array[n - 1 - i];
    array[n - 1 - i] = temp;
  }
  printf("The reversed array is: ");
  for (int i = 0; i < n; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
  free(array);


    return 0;
}
