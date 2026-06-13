/*
 * Program: Fibonacci Series Generator
 * Objective: Display the Fibonacci sequence up to a user-specified number of terms (N).
 */
 #include<stdio.h>
 int main(){
    int n;
    int num1;
    int num2 = 0;
    int num3 = 1;
    printf("Enter your number of terms :" );
    scanf("%d",&n);
   if(n <= 0){
     printf("invalid input");
     return 1;
   }else{
    for(int i = 0; i < n; i++){   
     printf(" %d",num2); 
     num1 = num2 + num3;
     num2 = num3;
     num3 = num1;
    }
}
    return 0;
 }