// Problem 1: The Even/Odd Check
#include<stdio.h>
int main(){
    int num;
    printf("The Even/Odd Check \n");
    printf("Enter the number :");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}