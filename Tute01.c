/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
   float avg;
   	printf("input marks for the 1st module - ");
	scanf ("%d",&mark1);
	   printf("input marks for the 2nd module - ");
	scanf ("%d",&mark2);
   avg = (mark1+mark2)/2;
	printf("%.2f",avg);
   return 0;
}

