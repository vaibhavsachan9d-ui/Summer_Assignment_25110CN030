//write a program to find row-wise sum
#include<stdio.h>
int main()
{
    int rows,column,i,j,sum;
    printf("Enter no. of rows");
    scanf("%d",&rows);
    printf("Enter no. of columns");
    scanf("%d",&column);
    int A[rows][column];
    printf("Enter elements of first matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        sum=0;
        for(j=0;j<column;j++){
            sum+=A[i][j];
        }
        printf("Sum of %d rows is %d ",i+1,sum);
    }
    return 0;
}