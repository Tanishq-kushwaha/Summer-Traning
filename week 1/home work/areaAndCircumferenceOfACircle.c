/*
 * Program: Area and Circumference of a Circle
 * Objective: Accept radius as input and compute both the area and geometric circumference of the circle.
 */

 #include<stdio.h>
 int main(){
    float radius, pi, circumference, area;
    pi = 3.14;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    area = pi*(radius*radius);
    circumference = 2*pi*radius;
    printf("Area of the circle is : %f \n",area);
    printf("Circumference of the circle is : %f",circumference);
   return 0;
 }