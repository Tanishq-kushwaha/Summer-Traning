/*
 * Program: Cube of a Number
 * Objective: Input a single number from the user and calculate its mathematical cube value.
 */
  #include<stdio.h>
 int main(){
    int num, cube;
    printf("Enter the number :");
    scanf("%d",&num);
    cube = num * num * num;
    printf("Your Answer is: %d",cube);
    return 0;
 } 