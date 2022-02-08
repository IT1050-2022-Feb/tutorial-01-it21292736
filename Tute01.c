/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int no1, no2;
	int avg;
	
	printf("Enter the first mark:");
	scanf("%d",&no1); //read the value
	
	printf("Enter the second mark:");
	scanf("%d",&no2);//read the value
	
	avg=(no1+no2)/2;
	
	printf("The avg is %d\n",avg); 
	
  
  return 0;
}

