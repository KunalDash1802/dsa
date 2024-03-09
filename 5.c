#include<stdio.h>
int main()
{
    struct book{
        char name[20];
        float price;
        int pages;
    };
    struct book*ptr,b[5];
    int i;
    ptr=b;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the next book name,price and no.of pages\n");
        scanf("\n%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%s %f %d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
    }
    return 0;
}