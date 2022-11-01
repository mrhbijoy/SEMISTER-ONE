#include<stdio.h>

    int main(){
        int m, n,i,j;
        printf("Enter the rows number:");
        scanf("%d", &m);
         printf("Enter the colum number:");
        scanf("%d", &n);
        int A[m][n], B[m][n],C[m][n];
        for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                printf("Give the value of:A[%d][%d] ",i,j);
                scanf("%d", &A[i][j]);
                
            }
        }
    for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                printf("Give the value of:B[%d][%d] ",i,j);
                scanf("%d", &B[i][j]);
                
            }
        }
    for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                C[i][j] = 0;
                for (int k = 0; k < n;k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
      for (i = 0; i < m;i++){
          printf("\n");
          for (j = 0; j < n; j++)
          {
              printf("%d " ,C[i][j]);
                
                
            }
        }  
    }
