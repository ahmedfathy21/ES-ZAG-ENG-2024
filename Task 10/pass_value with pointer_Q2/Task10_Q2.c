#include <stdio.h>
 int val_1;
 int val_2;
 int sum,substracte;
 void sum_substracte_fun(int *ptr_sum,int *ptr_substracte,int val1,int val2);

 int main (){
  printf("please enter the firse num :");
  scanf("%i",&val_1);
  printf("please enter the second num :");
  scanf("%i",&val_2);
  sum_substracte_fun(&sum,&substracte,val_1,val_2);
  printf("the summing of val_1 and val_2 :%i\n",sum);
  printf("the subtraction of val_1 and val_2 :%i\n",substracte);


    return 0;
 }

    void sum_substracte_fun(int *ptr_sum,int *ptr_substracte,int val1,int val2){
       
        *ptr_sum=val1+val2;
        *ptr_substracte=val1-val2;
     }