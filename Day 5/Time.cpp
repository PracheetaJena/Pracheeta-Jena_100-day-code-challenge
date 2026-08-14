//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
#include<conio.h>
int main()
{
    int sec, second, hour, minutes;
    
    printf("Enter Time in seconds: ");
    scanf("%d", &sec);
    
    hour = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    second = sec % 60;
    
    printf("Hours : %d , Minutes : %d , Seconds : %d\n", hour, minutes, second);
    

}
