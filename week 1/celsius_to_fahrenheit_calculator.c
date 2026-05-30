// celsius_to_fahrenheit_calculator
#include<stdio.h>
int main(){
float C,F;
printf("Enter the Temperature in  Celsius :");
scanf("%f",&C);
F = C*(9.0/5.0)+32;
printf("Temperature in Fahrenheit : %f",F);
return 0;
}        