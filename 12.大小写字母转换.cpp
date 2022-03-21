#include<stdio.h>    
int main()    
{char a;    
scanf("%c",&a);    
if(a<=90&&a>=65)    
printf("%c\n",a+32);    
else if(a<=122&&a>=97)    
printf("%c\n",a-32);    
else printf("%c\n",a);    
}