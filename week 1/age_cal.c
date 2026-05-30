//Age calculator program 
#include<stdio.h> 
int main(){
     int  num1, num2, ans;
   printf("Enter your birth year:");
   scanf("%d", &num1);
   printf("Enter current year:");
   scanf("%d", &num2);
   ans = num2 - num1;
   printf("your age is: %d",ans);
   getchar();
   return 0;
}