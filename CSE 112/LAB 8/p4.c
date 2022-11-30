#include<stdio.h>

    int main(){
        int m, n,i,j;
        printf("Enter the rows number:");
        scanf("%d", &m);
         printf("Enter the colum number:");
        scanf("%d", &n);
        int A[m][n];
        for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                printf("Give the value of:A[%d][%d] ",i,j);
                scanf("%d", &A[i][j]);
                
            }
        }
    
        int B[n][m];
        for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                B[j][i] = A[i][j];
            }
        }
        for(i=0;i<n;i++){
            printf("\n");
            for(j=0;j<m;j++){
                printf("%d ",B[i][j]);
            }
        }
    }