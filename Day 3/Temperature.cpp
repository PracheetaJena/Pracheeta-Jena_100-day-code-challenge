/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	float cel,fan;
	printf("Enter your Temperature in Celsius :");
	scanf("%f",&cel);
	fan =  (cel * 9/5) + 32;
	printf(" Fahrenheit = %f",fan); 
}
