/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter Total no.s to be entered : ");
	scanf("%d",&num);
		if(num == 0)
		printf("\n %d is Zero",num);
		else if(num < 0)
		printf("\n %d is Negative",num);
		else
		printf("\n %d is Positive",num);
	
}
