/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter Two Numbers:");
	scanf("%d%d",&a,&b);
	c = a+b;
	printf("Sum = %d\n",c);
	f = a-b;
	printf("Subtract = %d\n",f);
	d = a/b;
	printf("Division = %d\n",d);
	e = a*b;
	printf("Multiplication = %d\n",e);
}
