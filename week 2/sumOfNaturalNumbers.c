/*
 * Program: Sum of Natural Numbers
 * Objective: Compute the cumulative sum of all natural numbers from 1 up to a user-defined integer N.
 */
 #include<stdio.h>
 int main(){
    int num;
    int i;
    int sum = 0;
    printf("Enter your number : ");
    scanf("%d",&num);
  if(num > 0){
    for(i = 1; i <= num ; i++){
        sum = sum + i;
    }}else{
        printf("Invalid input\a");
        return 1;
    }
    printf("Sum is : %d", sum);
    return 0;
 }