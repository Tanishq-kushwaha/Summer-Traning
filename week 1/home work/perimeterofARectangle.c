/*
 * Program: Perimeter of a Rectangle
 * Objective: Accept length and width from the user to calculate the total perimeter boundary.
 */

 #include<stdio.h>
 int main(){
    int length, width, perimeter;
    printf("Enter the length of rectangle : ");
    scanf("%d",&length);
    printf("Enter the width of rectangle : ");
    scanf("%d",&width);
    perimeter = 2*(length + width);
    printf("The Perimeter is  : %d",perimeter);
    return 0;
 }
