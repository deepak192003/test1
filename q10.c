// Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int cost_price,selling_price,profit,loss,profitpercent,losspercent;
    printf("Enter cost price and selling price of product: ");
    scanf("%d%d",&cost_price,&selling_price);
    profit=selling_price-cost_price;
    loss=cost_price-selling_price;
    printf("%d\n",profit);
    printf("%d\n",loss);
    profitpercent=(profit/cost_price)*100;
    losspercent=(loss/cost_price)*100;
        printf("Loss percent of product is %d",losspercent);
        printf("Profit percent of product is %d",profitpercent);
}