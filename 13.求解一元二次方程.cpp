#include<stdio.h>  
#include<math.h>  
int main()  
{  
    int a,b,c;  
    scanf("%d%d%d",&a,&b,&c);  
    if(a==0)  
    {  
    if(b==0)  
      printf("Input error!\n");  
    else  
      printf("x=%.6f\n",(float)-c/b);  
    }  
    else  
    {  
      double delta=b*b-4*a*c;  
      if(delta>0)  
        printf("x1=%.6f\nx2=%.6f\n",(-b+sqrt(delta))/a*0.5,(-b-sqrt(delta))/a*0.5);  
      else   
        if(delta<0)  
          if(b==0)  
          printf("x1=%.6fi\nx2=%.6fi\n",sqrt(-delta)/a*0.5,-sqrt(-delta)/a*0.5);  
          else  
          printf("x1=%.6f+%.6fi\nx2=%.6f-%.6fi\n",-b/a*0.5,sqrt(-delta)/a*0.5,-b/a*0.5,sqrt(-delta)/a*0.5);  
        else  
          printf("x1=x2=%.6f\n",-b/a*0.5);  
    }  
    return 0;  
}