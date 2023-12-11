#include <stdio.h>
#include <stdlib.h>
unsigned int nums[10];
int main()
{
    int count=0;
 printf("please enter 10 nums :\n");
 for(count=0;count<=9;count++){
    scanf("%d",&nums[count]);
 }
  int max=nums[0];
  int min=nums[0];
  for(count=0;count<=9;count++){
    if(nums[count]>max)
        max=nums[count];
  }
  for(count=0;count<=9;count++){
    if(nums[count]<min)
        min=nums[count];
  }
  printf("the max num=%d\n",max);
  printf("the min num=%d\n",min);



    return 0;
}
