/*
 * Program: 2D Matrix Addition
 * Objective: Read two 2x2 matrices from the user and compute their element-wise sum into a third matrix.
 */
 #include<stdio.h>
 int main(){
    int matrix1[2][2];
    int matrix2[2][2];
    int sum[2][2];
    printf("Enter your value for matrix 1\n");
   for(int i = 0; i<2 ; i++){
    for(int j = 0; j<2 ; j++){
   printf("Enter your value : ");
   scanf("%d",&matrix1[i][j]);
    } 
 }
   printf("Enter your value for matrix 2\n");
    for(int i = 0; i<2 ; i++){
    for(int j = 0; j<2 ; j++){
   printf("Enter your value : ");
   scanf("%d",&matrix2[i][j]);
   sum[i][j] = matrix1[i][j] + matrix2[i][j];
    } 
 }
 printf("Sum is \n");
 for(int i = 0; i<2 ; i++){
    for(int j = 0; j<2 ; j++){
   printf("%d ", sum[i][j]);
    } 
    printf("\n");
 }
 return 0;
}