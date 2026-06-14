// Challenge 3: The Complete Execution (Write the Code)
// Write a complete C program to calculate the Perimeter of a Rectangle.
// Constraint 1: You must write a proper Function Declaration above main().
// Constraint 2: You must write the Function Definition below main().
// Constraint 3: main() should handle taking the user inputs (length and width) and passing them to the function.

#include<stdio.h>


int perimeter(int a, int b);

int main(){
    int result;
    int a, b;
 printf("Enter your Rectangle length : ");
 scanf("%d",&a);
 printf("Enter your Rectangle width: ");
 scanf("%d",&b);
 result = perimeter(a, b);
 printf(" Perimeter is : %d", result);
 return 0;
}

int perimeter(int a, int b)
{
    int p;
    p = 2*(a + b);
    return p;
}