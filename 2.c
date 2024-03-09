#include<stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book b1,b2;
    printf("\nEnter the names,prices and no. of pages of 2 Books\n");
    scanf("%s %f %d",b1.name,&b1.price,&b1.pages);
    scanf("%s %f %d",b2.name,&b2.price,&b2.pages);
    printf("\n And this is what you entered");
    printf("\nname:%s price:%f pages:%d",b1.name,b1.price,b1.pages);
    printf("\nname:%s price:%f pages:%d",b2.name,b2.price,b2.pages);
    return 0;
}