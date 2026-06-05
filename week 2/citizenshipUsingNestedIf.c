#include<stdio.h>
int main(){
    int age;
     printf("Enter your age : ");
     scanf("%d",&age);
     if(age >= 18){
        int cz;
          printf("If you are indian press 1 : ");
          scanf("%d",&cz);
        if(cz == 1){
            printf("Eligible");
        }else{
         printf("Not Eligible");
        }
    }else{
         printf("Not Eligible");
     }
}