//write a program to check symmetric matrice
#include<stdio.h>
int main()
{
    int n,i,j;
    int symmetric=1;
    printf("Enter order of matrice");
    scanf("%d",&n);
    int A[n][n];
    printf("Enter elements of matrice");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]!=A[j][i]){
                symmetric=0;
                break;
            }
        }
        if(symmetric==0){
            break;
        }
    }
    if(symmetric==1){
        printf("Matrice is symetric");
    }
    else{
        printf("Not symmetric");
    }
    return 0;
}