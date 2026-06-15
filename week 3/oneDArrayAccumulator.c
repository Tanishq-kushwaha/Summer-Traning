/*
 * Program: 1D Array Accumulator
 * Objective: Read 5 integer inputs from the user into an array and compute their total sum.
 */

 #include<stdio.h>
 int main(){
    int arr[5];
    int sum = 0;
    for( int i = 0; i < 5; i++){
        printf("Enter your number : ");
        scanf("%d",&arr[i]);
         sum = sum + arr[i];
    }
    printf("Sum is : %d", sum);
    return 0;
 }