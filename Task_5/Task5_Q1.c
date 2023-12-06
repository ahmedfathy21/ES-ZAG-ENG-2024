#include <stdio.h>
#include <stdlib.h>
unsigned char set_bit(unsigned char num, unsigned int bit);
unsigned char clear_bit(unsigned char num, unsigned int bit);
unsigned char toggle_bit(unsigned char num, unsigned int bit);
unsigned char read_bit(unsigned char num, unsigned int bit);
void main()
{
    unsigned char num=65;
    /*printf("%c \n",num);
    printf("%hhu",num);*/
    int choice;
    unsigned int bit;
    printf ("please choose the fun (1/set,2/clear,3/toggle,4/read):");
    scanf("%d",&choice);

    if(choice<1||choice>4){
        printf("error choice ,please enter a num between 1 and 4.\n ");

    }
    printf("please enter a num:");
    scanf("%hhu",&num);
    printf("please enter the bit num (from 0:7)");
    scanf("%d",&bit);

    if(bit<1||bit>7){
        printf("error bit , please enter a num between 0:7");

    }
    switch(choice){
    case 1:
     num= set_bit(num,bit);
    break;
    case 2:
      num = clear_bit(num, bit);
      break;
    case 3:
      num = toggle_bit(num, bit);
      break;
    case 4:
      num = read_bit(num, bit);
      break;
    }
printf("Result= %hhu\n", num);

}
unsigned char set_bit(unsigned char num, unsigned int bit) {
  return num | (1 << bit);
}

unsigned char clear_bit(unsigned char num, unsigned int bit) {
  return num & ~(1 << bit);
}

unsigned char toggle_bit(unsigned char num, unsigned int bit) {
  return num ^ (1 << bit);
}

unsigned char read_bit(unsigned char num, unsigned int bit) {
  return (num >> bit) & 1;
}

