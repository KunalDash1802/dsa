#include<stdio.h>
#include<stdlib.h>
void main(void)
{
    system("cls"); 
    int r,c;
    printf("Enter Row and Column : ");
    scanf("%d %d",&r,&c);
    int* ptr = malloc((r * c) * sizeof(int));
    printf("Enter element to the array : ");
    for (int i = 0; i < r * c; i++)
        scanf("%d",&ptr[i]);
    for (int i = 0; i < r; i++)
     {
        int sumR=0;
        for (int j = 0; j < c; j++)
        {
            printf("%d ", ptr[i * c + j]);
            sumR+=ptr[i * c + j];
        }
        printf(" Sum : %d\n",sumR);
    }
    for (int j = 0; j < r; ++j)
     {
        int sumC = 0;
        for (int i = 0; i < c; ++i)
        {
            sumC = sumC + ptr[i * c + j];
        }
            printf("Sum of the %d column is = %d\n", j, sumC);
    }
    free(ptr);
}