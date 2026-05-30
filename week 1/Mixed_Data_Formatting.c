//Mixed Data Formatting
#include<stdio.h>
int main(){

    //Age
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    
    //Height 
    float height;
    printf("Enter your height:");
    scanf("%f",&height);
    printf("You are %d years old, and your height is %f feet.", age, height);
    return 0;
}