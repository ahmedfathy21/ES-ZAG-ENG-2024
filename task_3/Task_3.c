#include <stdio.h>
#include <stdlib.h>

void main()
{  //Q1
   /* int x;
    int numbers[5];
    for (x=0;x<5;x++)
    {
        printf("please enter the num :\n",x+1);
        scanf("%d",&numbers[x]);
    }
    for(x=0;x<5;x++){
        if(numbers[x]%3==0)
            printf("the num that divides by 3= %d\n",numbers[x]);
    }*/
    //Q1

    //Q2
   /* 
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  int number =1;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      printf("%d ", number);
      number++;}
      printf("\n");}
  } */
  //Q2

  //Q3
  /*int base,power ;
  printf("please enter the base:\n ");
  scanf("%d",&base);
  printf("please enter the power:\n");
  scanf("%d",&power);
  int the_result = 1;
  for (int i = 0; i < power; i++) {
    the_result*= base;
}printf("the result=%d",the_result);*/
//Q3

//Q4
 /* int A,B;
  printf("please enter the num A:\n");
  scanf("%d",&A);
  printf("please enter the num B:\n");
  scanf("%d",&B);
  for(int i=A;i<=B;i++){
    printf ("%d\n",i);
  }*/
  //Q4

 //Q5

  /*int fac;
  printf("please enter the num:\n");
  scanf("%d",&fac);
  printf("%d",factorial(fac));

}
int factorial(int num){
if(num==1){
    return num;}
else {
    return (num*factorial(num-1));
}*/
//Q5


//Q6
  /*int numCount, number, max, min;

  printf("Enter the number of numbers: ");
  scanf("%d", &numCount);
  printf("Enter number 1: ");
  scanf("%d", &number);
  max = number;
  min = number;

  for (int i = 2; i <= numCount; i++) {
    printf("Enter number %d: ", i);
    scanf("%d", &number);

    if (number > max) {
      max = number;
    } else if (number < min) {
      min = number;
    }
  }

  printf("Maximum number: %d\n", max);
  printf("Minimum number: %d\n", min);*/
//Q6

}

