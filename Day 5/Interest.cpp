/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, a, i = 1;
    int ch;
    
    printf("Enter the principal, rate, and time: ");
    scanf("%f %f %f",&p,&r,&t);
    
    printf("Enter your choice :\n1. Simple Interest\n2. Compound Interest\nChoice: ");
    scanf("%d", &ch);
    
    switch(ch)
    {
        case 1:
            i = (p * r * t) / 100;
            printf("Simple Interest = %f ",i);
            break;
            
        case 2:
            a = p * pow(1 + (r / 100), t);
            i = a - p;
            printf("Compound Interest = %f ",i);
            break;
            
        default:
            printf("Invalid Input\n");
            
    }
    
    
}
