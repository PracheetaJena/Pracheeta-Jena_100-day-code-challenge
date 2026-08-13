/*Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter Two numbers");
	scanf("%d%d",&a,&b);
	printf("Original Numbers \n a = %d \n",a);
	printf(" \n b = %d",b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n Swap Numbers a = %d \n",a);
	printf("\n b  = %d",b);
}
