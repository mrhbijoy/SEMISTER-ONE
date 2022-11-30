
// C Program To Find Transpose of a Matrix
#include <stdio.h>
int main(){
  int i, j, row, column;
  int matrix[10][10], transpose[10][10];


  printf("Enter rows and columns of the matrix: ");
  scanf("%d %d", &row, &column);

  printf("Enter elements of the matrix: \n");
  for (i = 0; i < row; ++i)
  for (j = 0; j < column; ++j){
    scanf("%d", &matrix[i][j]);
  }


  for (i = 0; i < row; ++i){
  for (j = 0; j < column; ++j){
    transpose[j][i] = matrix[i][j];
  }
  }

  printf("Transpose of the entered matrix is: \n");
  for (i = 0; i < column; ++i){
  for ( j = 0; j < row; ++j){
    printf("%d \t", transpose[i][j]);
    }
  printf("\n");
  }
  return 0;
}
