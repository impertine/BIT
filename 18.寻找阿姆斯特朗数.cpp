#include<stdio.h>
#include<math.h>
solve(int n,int a)
{
	int b=0;
	for(int i=1;i<=n+1;i++)
	{
		b+=(int)pow((double)(a%10),(double)n);
		if(a/10==0)
		i=n+1;
		else
		a/=10;
	}
	return b;
}
main()
{
	int n,d;
	scanf("%d",&n);
	int x=(int)pow(10,(double)n-1);
	int y=(int)pow(10,(double)n);
	for(int i=x;i<y;i++)
	{
	if(i==solve(n,i))
	{
	printf("%d\n",i);
	d=1;
    }
	}
	if(d!=1)
	printf("No output.\n");
}