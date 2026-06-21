/*
 * Program: Optimized Prime Number Checker
 * Objective: Determine if a user-input integer is a prime number.
 */

 #include<stdio.h>
 int main(){
    int n;
    int isPrime = 1;
    printf("Enter your number : ");
    scanf("%d",&n);
    

    if(n <= 1){
        isPrime = 0;
    }else{
        for(int i = 2; i <= n/2;i++){
            if(n%i == 0){
               isPrime = 0;
               break;  
            }
        }
    }
    if(isPrime == 1){
    printf("Prime Number");
    }else{
      printf("Not a Prime Number");   
    }
    return 0;
 }