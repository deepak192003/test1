#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>35)
    {
        printf("You are pass");
    }
    else
    {
        printf("you are fail");
    }
}