//  Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
     char c;
    printf("Enter a character from alphabets: ");
    scanf("%c",&c);

    if('c'>=65&&'c'<=90)
    {
        printf("Small alphabet");
    }
        if('c'>=97&&'c'<=122)
        {
            printf("Capital letter");
        }


}