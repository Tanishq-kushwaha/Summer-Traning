// Problem 1: The Even/Odd Check
#include<stdio.h>
int main(){
    int a;
    printf("The Even/Odd Check \n");
    printf("Enter the number :");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}