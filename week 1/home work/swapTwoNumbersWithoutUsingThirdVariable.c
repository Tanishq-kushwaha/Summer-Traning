/*
 * Program: Swap Two Numbers (Without Third Variable)
 * Objective: Swap the values of two variables using arithmetic operations without any auxiliary variable.
 */
 #include<stdio.h>
 int main(){
    int a,b;
    printf("Enter the value for A :");
    scanf("%d",&a);
    printf("Enter the Value for B :");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of A : %d \n The value of B :%d",a,b);
    return 0; 
 }