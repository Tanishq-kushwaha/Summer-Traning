#include<stdio.h>
int getAverage(int a, int b, int c)
{
    int sum, average;
    sum = a + b + c;
    average = sum / 3;
    return (average);
}
int main(){
    int a, b,  c;
printf("Enter your no : ");
scanf("%d", &a);
printf("Enter your no : ");
scanf("%d", &b);
printf("Enter your no : ");
scanf("%d", &c);
// int z = getAverage(a, b, c); 
printf("%d", getAverage(a, b, c));
return 0;
}