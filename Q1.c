//Move Zeroes
#include<stdio.h>

    int func(int *arr,int n,int i){
        int j=0;
          for(i=0;i<n;i++){
          if(arr[i]!=0){
           arr[j]=arr[i];
           j++;
          }
        }
           while(j<n){
           arr[j]=0;
           j++;
           } 
           printf("After moving zeroes:\n");
           for(i=0;i<n;i++){
           printf("%d ",arr[i]);
           }
     }

int main(){

    int arr[10];
    int n,i;
     printf("Enter the no of elements of an array: ");
     scanf("%d",&n);
     printf("Enter the elements of an array: ");
    
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
           }
        func(arr,n,i);

}