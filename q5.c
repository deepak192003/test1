//number is 3 digit or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<999 && n>99)
    printf("number is 3 digit");
}