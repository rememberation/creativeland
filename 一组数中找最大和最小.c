/*��һ�������������С*/
/*��һ������һ��ֵ����һ������ֵ��������������С*/
#include<stdio.h>
int main()
{
	int max=0,min=0,n=0,i=1,a=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);/*��ѭ������������С*/ 
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

