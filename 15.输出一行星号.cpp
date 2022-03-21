#include<stdio.h>    
int main()    
{    
    int i = 1;    
    char b = '*';    
    int a;    
    scanf("%d",&a);    
    while (i<=a)    
    {    
        printf("%c", b);    
        i++;    
    }    
    printf("\n");    
}