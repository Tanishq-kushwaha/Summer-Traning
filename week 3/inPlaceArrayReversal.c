/*
 * Program: In-Place Array Reversal
 * Objective: Reverse the elements of a 1D array directly in memory using the two-pointer technique.
 */
 #include<stdio.h>
 int main(){
  int n;
  printf("Enter your Array size : ");
  scanf("%d",&n);

  int arr[n];
  for(int i = 0; i < n; i++){
    printf("Enter your value : ");
    scanf("%d",&arr[i]);
  }
  return 0;
 }