/*一个数可以写成多少个三角数的形式*/ 
#include<stdio.h>
int main()
{
	int n,s=0;
	int i=1,j=1;
	scanf("%d",&n);
	for(i=1;i<=n/3;i++)
	{
		for(j=i;j<=(n-i)/2;j++)
		{
			int c=n-i-j;
			if(i+j>c)
			s=s+1;
		}
	}
	printf("%d",s);
	return 0;
}
	
