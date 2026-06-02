/*
 * Program: Swap Two Numbers (With Third Variable)
 * Objective: Swap the values of two user-input variables using a temporary third variable.
 */

 #include<stdio.h>
 int main(){
    int a,b,c;
  printf("Enter the value for A");
  scanf("%d"&a);
  printf("Enter the Value for B");
  scanf("%d",&b);
  a = c;
  a = b;
  b = c;
  printf("After swap \n A is :%d \n B is : %d ",a,b);
 }