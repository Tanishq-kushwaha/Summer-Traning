/*
 * Program: In-Place Palindrome Verifier
 * Objective: Determine if a character array is a palindrome without using extra memory or <string.h>.
 * Note: Leverages manual length calculation and a two-pointer comparison strategy.
 */
 #include<stdio.h>
 int main(){
    char str[50];
    // int isPalindrome = 1;
    printf("Enter your string : ");
    scanf("%s", str);
    int length = 0;
    while(str[length] != '\0'){
       length++;
    }
    int start = 0;
    int end = length - 1;
    int isPalindrome = 1;
    while(start < end){
       if(str[start] != str[end]){
        isPalindrome = 0;
        break;
       }else{
        start++;
        end++;
       }   
    }
    if(isPalindrome == 1){
        printf("Palindrome");
    }else{ 
        printf("Not a Palindrome");
 }
    return 0;
}