#include <stdio.h>
#include <stdlib.h>
int class1[10];
int class2[10];
int class3[10];
int main()
{   int count;
    int num_of_passed_st1=0;
    int num_of_passed_st2=0;
    int num_of_passed_st3=0;
    int total_passed_st;
    int num_of_failed_st1=0;
    int num_of_failed_st2=0;
    int num_of_failed_st3=0;
    int total_failed_st;
    int highest_grade1;
    int highest_grade2;
    int highest_grade3;
    int highest_grade;
    int lowest_grade1;
    int lowest_grade2;
    int lowest_grade3;
    int lowest_grade;
    int total_grade1=0;
    int total_grade2=0;
    int total_grade3=0;
    int total_grade;
    float avg_grade;
   printf("enter the grades of the students in class1:\n ");
   for(count=0;count<=9;count++){
    scanf("%d",&class1[count]);
   }

   printf("enter the grades of the students in class2:\n ");
   for(count=0;count<=9;count++){
    scanf("%d",&class2[count]);
   }
    printf("enter the grades of the students in class3:\n ");
   for(count=0;count<=9;count++){
    scanf("%d",&class3[count]);
   }
   for(count=0;count<=9;count++){
    if(class1[count]>=50)
        num_of_passed_st1++;
   }
   for(count=0;count<=9;count++){
    if(class2[count]>=50)
        num_of_passed_st2++;
   }
   for(count=0;count<=9;count++){
    if(class3[count]>=50)
        num_of_passed_st3++;
   }
   for(count=0;count<=9;count++){
    if(class1[count]<50)
        num_of_failed_st1++;
   }
   for(count=0;count<=9;count++){
    if(class2[count]<50)
        num_of_failed_st2++;
   }
   for(count=0;count<=9;count++){
    if(class3[count]<50)
        num_of_failed_st3++;
   }
   total_passed_st=num_of_passed_st1+num_of_passed_st2+num_of_passed_st3;
   total_failed_st=num_of_failed_st1+num_of_failed_st2+num_of_failed_st3;
   printf("the num of passed students:%d\n",total_passed_st);
   printf("the num of failed students:%d\n",total_failed_st);
   highest_grade1=class1[0];
   for(count=0;count<=9;count++){
    if(class1[count]>highest_grade1)
        highest_grade1=class1[count];
   }
   highest_grade2=class2[0];
   for(count=0;count<=9;count++){
    if(class2[count]>highest_grade2)
        highest_grade2=class2[count];
   }
   highest_grade3=class3[0];
   for(count=0;count<=9;count++){
    if(class3[count]>highest_grade3)
        highest_grade3=class3[count];
   }
   highest_grade=highest_grade1;
   if(highest_grade2>highest_grade){
    highest_grade=highest_grade2;
   }
   if(highest_grade3>highest_grade){
    highest_grade=highest_grade3;
   }


   lowest_grade1=class1[0];
   for(count=0;count<=9;count++){
    if(lowest_grade2>class2[count]){
        lowest_grade1=class1[count];
    }
   }

   lowest_grade2=class2[0];
   for(count=0;count<=9;count++){
    if(lowest_grade2>class2[count]){
        lowest_grade2=class2[count];
    }
   }
   lowest_grade3=class3[0];
   for(count=0;count<=9;count++){
    if(lowest_grade3>class3[count]){
        lowest_grade3=class3[count];
    }
   }
   lowest_grade=lowest_grade1;
   if(lowest_grade2<lowest_grade){
    lowest_grade=lowest_grade2;
   }
   if(lowest_grade3<lowest_grade){
    lowest_grade=lowest_grade3;
   }
   for(count=0;count<=9;count++){
    total_grade1+=class1[count];
   }
   for(count=0;count<=9;count++){
    total_grade2+=class2[count];
   }
   for(count=0;count<=9;count++){
    total_grade3+=class3[count];
   }
   total_grade=total_grade1+total_grade2+total_grade3;
   avg_grade=total_grade/30;
   printf("the highest grade in class1 :%d\n",highest_grade1);
   printf("the highest grade in class2 :%d\n",highest_grade2);
   printf("the highest grade in class3 :%d\n",highest_grade3);
   printf("the highest grade in all classes :%d\n",highest_grade);
   printf("the lowest grade in class1 :%d\n",lowest_grade1);
   printf("the lowest grade in class2 :%d\n",lowest_grade2);
   printf("the lowest grade in class3 :%d\n",lowest_grade3);
   printf("the lowest grade in all classes :%d\n",lowest_grade);
   printf("the avg grade :%f\n",avg_grade);
    return 0;
}
