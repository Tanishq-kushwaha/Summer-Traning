/*
 * Program: Array Min-Max Finder
 * Objective: Read 5 integers into an array and determine the largest and smallest elements.
 */

 #include<stdio.h>
 int main(){
    int arr[5];
    int i;
    for(i = 0; i < 5;i++){
        printf("Enter your value : ");
        scanf("%d",&arr[i]);
    }

     int max = arr[0];
     int min = arr[0];


    for(i = 1; i < 5; i++){
       if(arr[i] > max){
        max = arr[i];
          }
       if(arr[i] < min){
         min = arr[i];
        }
    }

printf("min value is : %d \n", min);
printf("Max value is : %d \n", max);

 return 0;
}