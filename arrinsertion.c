#include<stdio.h>
int main (){
int n,i,temp;
printf("enter size:");
scanf("%d",&n);
int arr[n];
printf("enter elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int start=0,end=n-1;
while(start<end){
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
printf("reversed arrray:");
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
return 0;
}
