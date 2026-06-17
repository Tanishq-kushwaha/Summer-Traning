/*
 * Program: 2D Matrix Transpose
 * Objective: Read a 2x2 matrix from the user and compute its transpose.
 */
 #include<stdio.h>
 int main(){
    int matrix[2][2];

    printf("Enter your matrix \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Enter your value [%d][%d] :", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    //  Transpose Matrix
 printf("Transpose Matrix \n");
  for(int i = 0; i<2;i++){
    for(int j = 0; j<2; j++){
        printf("%d ",matrix[j][i]);
    }
    printf("\n");
  }
    return 0;
 }