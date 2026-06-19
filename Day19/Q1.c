//write a program to add matrices
#include<stdio.h>
int main()
{
    int rows,column,i,j;
    printf("Enter no. of rows");
    scanf("%d",&rows);
    printf("Enter no. of columns");
    scanf("%d",&column);
    int A[rows][column],B[rows][column],sum[rows][column];
    printf("Enter elements of first matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of second matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("Sum of matrices");
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}