/*
 * Program: Sum of Natural Numbers
 * Objective: Compute the cumulative sum of all natural numbers from 1 up to a user-defined integer N.
 */
 #include<stdio.h>
 int main(){
    int num;
    int i = 1;
    int sum = 0;
    printf("Enter your number : ");
    scanf("%d",&num);

    for(i; i <= num ; i++){
        sum = sum + i;
    }
    printf("Sum is : %d", sum);
 }