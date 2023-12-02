#include <stdio.h>
#include <stdlib.h>

void main()
{  //Q6 (BOUNS)
   int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int product = a * b * c * d;
    int lastTwoDigits = product % 100;

    printf("the last two digits from thire mult =%d\n", lastTwoDigits);
}
