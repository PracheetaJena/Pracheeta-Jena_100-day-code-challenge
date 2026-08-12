/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
#include<stdio.h>
int main()
{   float r,cir,area;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	cir = 2*r*3.14;
	area = 3.14*r*r;
	printf("Area of the circle: %f",area);
	printf("Circumference the circle %f:",cir);
	
}
