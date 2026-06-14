/*
 * Program: Even/Odd Verifier
 * Objective: Modularize the even/odd check using a function with a specific return type.
 * Logic: The function takes an integer, uses modulo (%), and returns 1 if Even, or 0 if Odd.
 * main() will use this returned integer to print the final message.
 */

 #include<stdio.h>

int checkEvenOdd(int num);

int main(){
  int num;
  int result;
  printf("Enter your no :");
  scanf("%d",&num);
    result = checkEvenOdd(num);
 if(result == 1){
printf("Even");
}else{
    printf("Odd");
 }
 return 0;
}

int checkEvenOdd(int num){
  if(num%2 == 0){
    return 1;
  }else{
    return 0;
  }
}
