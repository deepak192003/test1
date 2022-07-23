// . Write a program to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main()
{
    int number,last_number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number%2==0&&number%3==0)
    {
        printf("Yes the number is divisible by both");
 
    }
    else
    {
        printf("Not divisible");
    }
}
    