/*
 * Program: Area of a Rectangle
 * Objective: Accept length and width from the user to calculate the total area of a rectangle.
 */

 #include<stdio.h>
 int main(){
    int length, width, area;
    printf("Enter the length of rectangle : ");
    scanf("%d",&length);
    printf("Enter the width of rectangle : ");
    scanf("%d",&width);
    area = length * width;
    printf("The Area of rectangle : %d",area);
    return 0;
 }