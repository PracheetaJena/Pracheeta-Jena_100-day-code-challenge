#include <stdio.h>
#include <conio.h>
int main()
{
   float s1,s2,s3;

printf("Enter the sides of the Triangle :");
	scanf("%f%f%f",&s1,&s2,&s3);

	if(s1 == s2 && s2 == s3)
	{
		printf("It is a Equilateral Triangle.");
	}
	else if(s1 == s2 || s2 == s3 || s3 == s1)
	{
		printf("It is a Isoceles Triangle.");
	}
	else
	{
		printf("It is a Scalene Triangle.");
	}
}
