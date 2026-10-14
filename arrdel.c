#include<stdio.h>
int main (){
int arr[50],n,pos,i;
printf("enter number of elements :");
scanf("%d",&n);
printf("enter %d elements :",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter position to delete (1 to %d):",n);
scanf("%d", &pos);
for(i=pos-1;i<n;i++){
arr[i]=arr[i+1];
n--;
}
printf("array after deletion:");
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
return 0;
}
