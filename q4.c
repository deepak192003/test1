#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    ((n/2)*2==n)? (printf("number is even")):(printf("number is odd"));
}