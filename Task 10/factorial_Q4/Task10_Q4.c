#include <stdio.h>

unsigned int num;
unsigned int res;
unsigned int factorial(unsigned int N);
int main (){
printf("please enter the num of factorial :");
scanf("%i",&num);
res=factorial(num);
printf("the res =%i\n",res);
    return 0;
}
unsigned int factorial(unsigned int N){
    if(N==0)
    return 1;
    else
    {
        return N*factorial(N-1);
    }
 }