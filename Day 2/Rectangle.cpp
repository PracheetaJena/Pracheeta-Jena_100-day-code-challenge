/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,p,a;
	printf("Enter the Length and Breadth of a Rectangle ");
	scanf("%d%d",&l,&b);
	p= 2*(l+b);
	printf("Perimeter = %d",p);
	a = l*b;
	printf("Area = %d",a);
}
