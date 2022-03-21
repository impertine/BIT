#include<stdio.h>
#define pi 3.1415926
int main(){    
double r,h,s,v;    
scanf("%lf%lf",&r,&h);    
s=2*pi*r*h;    
v=pi*r*r*h;    
printf("s=%.2f,v=%.2f\n",s,v);    
return 0;    
}