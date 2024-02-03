#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
int main()
{
    unsigned int choice;
    unsigned int new_var=0;
  printf("please enter the number :");
  scanf("%i",&var);
  printf("please enter the num of bit :");
  scanf("%i",&BitNo);
  printf("please select the operation(1/set,2/clear,3/toggle):");
  scanf("%i",&choice);
switch(choice){
    case 1:
    new_var=Set_Bit(var,BitNo);
    break;
    case 2:
    new_var=Clear_Bit(var,BitNo);
      break;
    case 3:
    new_var=Toogle_Bit(var,BitNo);
      break;
    }
printf("Result= %i\n", new_var);
    return 0;
}

