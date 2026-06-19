//write a program to find sum of diagonal
#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter order of square matrix");
    scanf("%d",&n);
    int A[n][n];
    printf("Enter elements of matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum+=A[i][i];
    }
    printf("Sum is %d: ",sum);
    return 0;
}