#include <stdio.h>

double calc_avg_recursive(unsigned int arr[],unsigned int size,int sum,unsigned int index);
int main(){
   unsigned int N;
printf("please enter the num of ele of the array :");
scanf("%i",&N);
unsigned int A[N];
printf("please enter the elements of the array\n");
for(int i=0;i<N;i++){
  scanf("%i",&A[i]);
}
double avg=calc_avg_recursive(A,N,0,0);
printf("the avg :%0.6f\n",avg);
    return 0;
}
 double calc_avg_recursive(unsigned int arr[],unsigned int size,int sum,unsigned int index){
        if(index==size){
            return (sum/size);
        }
        else
        {
            return calc_avg_recursive(arr,size,(sum+arr[index]),(index+1));
        }
  }