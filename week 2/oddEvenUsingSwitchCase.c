#include<stdio.h>
int main(){
    int num;
    printf("Odd Even checker \n");
    printf("Enter your No : ");
    scanf("%d",&num);
 switch(num % 2){
 case 1:
 printf("Odd number");
 break;
 default:
 printf("Even number");
}
return 0;
}