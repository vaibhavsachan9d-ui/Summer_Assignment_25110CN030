//write a program to find transpose of matrix
#include<stdio.h>
int main()
{
    int rows,column,i,j;
    printf("Enter no. of rows");
    scanf("%d",&rows);
    printf("Enter no. of columns");
    scanf("%d",&column);
    int A[rows][column];
    printf("Enter elements of matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Transpose of matrix: ");
    for(i=0;i<column;i++){
        for(j=0;j<rows;j++){
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}