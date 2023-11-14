/*找一组数的最大与最小*/
/*第一行输入一个值，下一行输入值个数，找最大和最小*/
#include<stdio.h>
int main()
{
	int max=0,min=0,n=0,i=1,a=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);/*在循环中找最大和最小*/ 
		/*key point*/
		if(a>=max)
		max=a;
		if(a<=min)
		min=a;
	 } 
	 printf("max=%d\n",max);
	 printf("min=%d",min);
	 return 0;
} 

