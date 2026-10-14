#include<stdio.h>
struct employee{
int id;
char name;
float cgpa;
};
int main() {
struct employee emp;
printf("enter employee ID:");
scanf("%d",&emp.id);
printf("enter employee name:");
scanf("%c",&emp.name);
printf("enter employee cgpa:");
scanf("%f",&emp.cgpa);
return 0;
}
