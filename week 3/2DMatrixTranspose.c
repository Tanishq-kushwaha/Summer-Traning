/*
 * Program: 2D Matrix Transpose
 * Objective: Read a 2x2 matrix from the user and compute its transpose.
 */
 #include<stdio.h>
 int main(){
    int matrix[2][2];
    int temp;
    printf("Enter your matrix \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Enter your value [%d][%d] :", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }
    //swap
    temp = matrix[0][1];
    matrix[0][1] = matrix[1][0];
    matrix[1][0] = temp;    

    //  Transpose Matrix
  for(int i = 0; i<2;i++){
    for(int j = 0;)
  }
    return 0;
 }