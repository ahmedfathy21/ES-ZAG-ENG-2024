#include<stdio.h>
typedef struct 
{
    unsigned int salary;
    unsigned int bonus;
    unsigned int deduction;
}employee_t;

int main(){
    employee_t Ahmed;
    employee_t Waleed;
    employee_t Amr;
    printf("please enter ahmed salary :");
    scanf("%i",&Ahmed.salary);
    printf("please enter ahmed bonus :");
    scanf("%i",&Ahmed.bonus);
    printf("please enter ahmed deduction :");
    scanf("%i",&Ahmed.deduction);
    printf("please enter Waleed salary :");
    scanf("%i",&Waleed.salary);
    printf("please enter Waleed bonus :");
    scanf("%i",&Waleed.bonus);
    printf("please enter Waleed deduction :");
    scanf("%i",&Waleed.deduction);   
    printf("please enter Amr salary :");
    scanf("%i",&Amr.salary);
    printf("please enter Amr bonus :");
    scanf("%i",&Amr.bonus);
    printf("please enter Amr deduction :");
    scanf("%i",&Amr.deduction);  
    unsigned int ahmed_cash=Ahmed.salary+Ahmed.bonus-Ahmed.deduction;
    unsigned int Waleed_cash=Waleed.salary+Waleed.bonus-Waleed.deduction;
    unsigned int Amr_cash=Amr.salary+Amr.bonus-Amr.deduction;
    printf("total value needed :%i",(ahmed_cash+Waleed_cash+Amr_cash));
    return 0;
}