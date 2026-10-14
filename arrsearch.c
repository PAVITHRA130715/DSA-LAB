#include<stdio.h>
int main (){
int arr[50],n,key,i,found=0;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter elements to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i]==key){
found=1;
break;
}
}
if (found)
printf("element found at position %d\n",i+1);
else 
printf("element not found");
return 0;
}

