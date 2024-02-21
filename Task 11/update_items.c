#include<stdio.h>
typedef struct 
{
    unsigned char nameitem[50];
    float price;
    unsigned int quantity;
    
}item_t;

int main(){
     item_t item1;
     printf("Name :");
     gets(item1.nameitem);
     printf("Price :");
     scanf("%f",&item1.price);
     printf("Quantity :");
     scanf("%i",&item1.quantity);
    
printf("the price of the item %0.2f:",(item1.price*item1.quantity));


    return 0;
}
