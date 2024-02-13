#include <stdio.h>
int x=11,y=22,z=33;
int *p =&x;
int *q =&y;
int *r =&z;

int main(){

   printf("x =%i \t y=%i \t z=%i\n",x,y,z);
   printf("p=0x%X \t q=0x%X \t r=0x%X\n",p,q,r);
   printf("*p=%i \t *q=%i \t *r=%i \n",*p,*q,*r);
   printf("==================================\n");
   printf("Swapping pointers\n");
   printf("==================================\n");
    *r = *p;
    *p = *q; 
    *q = *r; 
     printf("x =%i \t y=%i \t z=%i\n",x,y,z);
   printf("p=0x%X \t q=0x%X \t r=0x%X\n",p,q,r);
   printf("*p=%i \t *q=%i \t *r=%i \n",*p,*q,*r);

    return 0;
}