#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        printf("%d is greater",n);
    }
    if(m>n)
    {
        printf("%d is greater",m);
    }
    else
    {
        printf("both are same %d",m);
    }
   
}