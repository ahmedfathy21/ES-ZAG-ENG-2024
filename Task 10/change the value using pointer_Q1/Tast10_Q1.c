#include <stdio.h>
unsigned int num =10;
unsigned int *ptr_num=NULL;
int main(){
  printf("the num before change the value using pointer =%i\n",num);
ptr_num=&num;
*ptr_num=20;
  printf("the num after change the value using pointer =%i\n",num);

    return 0;
}