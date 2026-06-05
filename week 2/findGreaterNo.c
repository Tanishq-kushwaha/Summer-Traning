#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter your no : ");
    scanf("%d",&a);
    printf("Enter your no : ");
    scanf("%d",&b);
    printf("Enter your no : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d",a);
    }else if(b>a && b>c){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
    return 0;
}