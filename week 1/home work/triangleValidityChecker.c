#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a side :");
    scanf("%d",&a);
    printf("Enter next side :");
    scanf("%d",&b);
    printf("Enter next side :");
    scanf("%d",&c);
    
    if(a+b>c && a+c>b && c+b>a){
        printf("Yes this is a triangle ");
    }else{
        printf("Not a triangle");
    }
    return 0;
}
