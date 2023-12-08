#include <stdio.h>
#include <stdlib.h>
int count_ones(unsigned int    n) {
  unsigned int count = 0;
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

void main()
{
    //Q1
 /*  int num = 1205, reversedNum = 0, remainder;
    printf("Original number: %d\n", num);
  while (num != 0) {
    remainder = num % 10;
    reversedNum = reversedNum * 10 + remainder;
    num /= 10;
  }

  printf("Reversed number: %d\n", reversedNum);*/
   //Q1


   //Q2
   /*int num;
   char charchter;
   printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a character: ");
    scanf(" %c", &charchter);

   /*printf("please enter the num:");
   scanf("%d",&num);
   printf("please enter the char:");
   scanf(" %c",&charchter);*/
  /* if(num%2==0){
    printf("the charchter is %c\n",charchter);
   }else{
    if (charchter >= 'a' && charchter <= 'z') {
            charchter -= 32;
        } else if (charchter >= 'A' && charchter <= 'Z') {
            charchter += 32;
            printf("the char is:%c",charchter);
   }

}*/
//Q2


   //Q3
 /* unsigned int number = 5;
  int binary[32];
  int i = 0;

  while (number > 0) {
    binary[i] = number % 2;
    number /= 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    printf("%d", binary[j]);
  }*/
  //Q3


  //Q4

  /*unsigned int n = 8;
  unsigned int count = count_ones(n);
  printf("The number of 1's in %u is %u\n", n, count);*/

  //Q4

  //Q5
  /*int sum =100 * (100 + 1) / 2;
  printf("The sum of numbers from 1 to 100 is %d\n", sum);*/
  //Q5
}

