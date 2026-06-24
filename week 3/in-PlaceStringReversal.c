/*
 * Program: In-Place String Reversal
 * Objective: Reverse a user-input character array directly in memory without using <string.h>.
 * Note: Designed using the Two-Pointer technique to ensure O(1) space complexity.
 */
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter your string : ");
    scanf("%s", str);
      
    int strLength = 0;
    for(int i = 0; str[i] != '\0'; i++){
     strLength++;
    }
      int start = 0;
      int end = strLength - 1;

      while(start < end){
      int temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end++;
      }
     
    return 0;
}