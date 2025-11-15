#include<stdio.h>
void reverse(char arr[],int len){
int left,right;
left=0;
right=len-1;
int i,temp;
for(i=0;right>left;i++){
  temp=arr[left];
  arr[left]=arr[right];
  arr[right]=temp;
  left++;
  right--;
}
for(i=0;i<len;i++){
  printf("%c",arr[i]);
}
return;
}
int main(){
    char arr[50];
    int i;
    printf("Enter the character of strings:");
    scanf("%s",arr);
    int a=strlen(arr);
    reverse(arr,a);
}