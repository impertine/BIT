#include<stdio.h>    
int gcd(int A,int B)  
{  
    int C=1;  
    if(A>=B)  
    {  
    for(int i=1;i<=B;i++)  
    {  
        if(A%i==0&&B%i==0)  
        C*=i;  
    }  
    }else   
    for(int i=1;i<A;i++)  
    {  
        if(A%i==0&&B%i==0)  
        C*=i;  
    }  
    return C;  
}  
int main(){  
    int a,b,c,d,e,f,g,h;  
    char x,y,z,u,v;  
    scanf("%d%c%d%c%c%c%d%c%d",&a,&x,&b,&u,&y,&v,&c,&z,&d);  
    if(y=='+'){  
      
        e=a*d+b*c;f=b*d;}  
        else if(y=='-')  
        {  
            e=a*d-b*c;f=b*d;  
        }  
        else if(y=='*')  
        {  
            e=a*c;f=b*d;  
        }  
        else if(y=='/')  
        {  
            e=a*d;f=b*c;  
        }  
    if(e==0){  
    printf("%d%c%d%c%c%c%d%c%d = 0\n",a,x,b,u,y,v,c,z,d);}  
    else  
    g=e/gcd(e,f);h=f/gcd(e,f);  
    if(e!=0&&g!=0&&h==1){  
    printf("%d%c%d%c%c%c%d%c%d = %d\n",a,x,b,u,y,v,c,z,d,g);  
    }  
    else if(e!=0&&g!=0)  
    printf("%d%c%d%c%c%c%d%c%d = %d/%d\n",a,x,b,u,y,v,c,z,d,g,h);  
} 