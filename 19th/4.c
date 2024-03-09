#include<stdio.h>
int main()
{
      int **a, row,col,i,j,s=0;
      printf("Enter Limit for Rows : ");
      scanf("%d",&row);
      printf("\nEnter Limit for Columns : ");
      scanf("%d",&col);
      a=(int *)malloc(row*sizeof(int));
      for(i=0;i<row;i++)
      {
            a[i]=(int *)malloc(col*sizeof(int));
      }
      printf("\nEnter Elements for Matrix of Size %d*%d:\n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  scanf("%d",&a[i][j]);
            }
      }
      printf("\n%d*%d Matrix : \n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  printf("%3d ",a[i][j]);
            }
      printf("\n");
      }
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  s=s+a[i][j];
            }
      }
      printf("\nSum of All Elements in Matrix = %d",s);
      return 0;
}