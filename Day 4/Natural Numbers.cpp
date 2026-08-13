/*Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int num, sum = 0;
	printf("Enter the Natural Number :");
	scanf("%d",&num);
	for(int i = 1 ; i<= num; i++ )
	{
		sum = sum + i;
	}
	printf("Sum of the %d natural number is %d",num,sum);
}
