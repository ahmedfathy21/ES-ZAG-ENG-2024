#include <stdio.h>
#include <stdlib.h>

void main()
{int num;
printf("please enter a positive num:");
scanf("%d",&num);
 if (num<=1){
    ("%please enter a positive num is greater than 1.\n");

 }
    int x=1;
    for(int i=2;i<=num/2;++i){
        if(num%i==0){
            x=0;
            break;
        }
    }
    if (x) {
    printf("%d is a prime num.\n", num);
  } else {
    printf("%d is not a prime num.\n", num);
  }
}
