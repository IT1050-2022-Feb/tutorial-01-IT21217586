/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1,mark2,sum,avg ;

  printf("enter the mark 1:");
  scanf("%f",&mark1);

  printf("enter the mark 2:");
  scanf("%f",&mark2);

  sum = mark1+mark2;

  avg=sum/2.0;

  printf("average of subjects: %.2f", avg);
  
  return 0;
}

