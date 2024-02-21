#include<stdio.h>
typedef struct {

    unsigned int hours;
    unsigned int mins;
    unsigned int seconds;
}period_t;
period_t period1;
period_t period2;
int main(){
printf("please enter hours ,minutes,seconds respectively :");
scanf("%i",&period1.hours);
scanf("%i",&period1.mins);
scanf("%i",&period1.seconds);
printf("please enter hours ,minutes,seconds respectively :");
scanf("%i",&period2.hours);
scanf("%i",&period2.mins);
scanf("%i",&period2.seconds);
printf("time difference:%i:%i:%i - %i:%i:%i =%i:%i:%i",period1.hours,period1.mins,period1.seconds,period2.hours,period2.mins,period2.seconds,(period1.hours-period2.hours),(period1.mins-period2.mins),(period1.seconds-period2.seconds));
    return 0;
}