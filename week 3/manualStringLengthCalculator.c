/*
 * Program: Manual String Length Calculator
 * Objective: Determine the character length of a user-input string without using built-in library functions.
 */

 #include<stdio.h>
 int main(){
   char str[50];
   printf("Enter your string (without space): ");
   scanf("%s", str);
   
   int length = 0;
   while(str[length] != '\0'){
     length++;
   }
   printf("%d", length);
   return 0;
 }