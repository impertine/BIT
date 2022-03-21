#include<stdio.h>  
#include<math.h>  
int main()  
{  
    int x,y;  
    scanf("%d%d",&x,&y);  
    double z=fabs(x%12*30+0.5*y-6*y);  
    if(z>180)  
    {  
    z=z-180;  
    printf("At %d:%.2d the angle is %.1f degrees.\n",x,y,z);  
    }else  
    printf("At %d:%.2d the angle is %.1f degrees.\n",x,y,z);  
    return 0;  
}