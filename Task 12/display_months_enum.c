#include<stdio.h>
enum months{
      January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
int main(){

   for (enum months month = January; month <= December; month++) {
        printf("%d\n",month);
    }

   
    return 0;
}