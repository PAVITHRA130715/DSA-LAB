#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
int id;
char name[50];
char designation[30];
float salary;
};
struct employee*createrecords(int n){
struct employee*emp=(struct employee*)malloc(n* sizeof(struct 
employee));
if(emp==NULL){
printf("memory allocation failded.\n");
exit(1);
}
for(int i=0;i<n;i++){
printf("\n enter details for empolyee %d:\n",i+1);
printf("\nid:");
scanf("%d",&(emp+i)->id);
printf("\nname:");
scanf("%s",(emp+i)->name);
printf("\ndesignation:");
scanf("%s",(emp+i)->designation);
printf("\nsalary:");
scanf("%f",&(emp+i)->salary);
}
return emp;
}
void displayrecords(struct employee*emp,int n){
printf("\n%-6s%-15s%-15s%-10s\n","id","name","designation","salary");
for(int i=0;i<n;i++){
printf("\n%-6d%-15s%-15s%-10.2f\n",(emp+i)->id,(emp+i)->name,(emp+i)->designation,(emp+i)->salary);
}
}
struct employee*searchbyid(struct employee*emp,int n,int id){
for(int i=0;i<n;i++){
if((emp+i)->id==id)
return(emp+i);
}
return NULL;
}
int main(){
int n,searchid;
struct employee*emp;
printf("enter number of employees:");
scanf("%d",&n);
emp=createrecords(n);
displayrecords(emp,n);
printf("\nenter employee id to search:");
scanf("%d",&searchid);
struct employee*found=searchbyid(emp,n,searchid);
if(found!=NULL)
printf("found:%d%s%s%2f\n",found->id,found->name,found->designation,found->salary);
else
printf("employee not found.\n");
free(emp);
return 0;
}
