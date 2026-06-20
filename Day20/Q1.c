//write a program to multiply matrices
#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("Enter no. of rows of first matrice");
    scanf("%d",&r1);
    printf("Enter no. of columns of first matrice");
    scanf("%d",&c1);
    printf("Enter no. of rows of second matrice");
    scanf("%d",&r2);
    printf("Enter no. of columns of second matrice");
    scanf("%d",&c2);
    if(c1!=r2){
        printf("Multiplication not possible");
        return 0;
    }
    int A[r1][c1],B[r2][c2],C[r1][c2];
    printf("Enter elements of first matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of second matrix\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            C[i][j]=0;
            for(k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Resultant matrice \n: ");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}