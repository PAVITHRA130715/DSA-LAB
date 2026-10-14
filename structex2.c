#include<stdio.h>
struct complex {
int real;
int imag;
};
int main(){
struct complex c1,c2,sum;
printf("enter first complex number (real imaginary):");
scanf("%d %d",&c1.real,&c1.imag);
printf("enter second complex number (real imaginary):");
scanf("%d %d ", &c2.real,&c2.imag);
sum.real=c1.real+c2.real;
sum.imag=c1.imag+c2.imag;
printf("sum = %d+%di\n",sum.real,sum.imag);
return 0;
}



