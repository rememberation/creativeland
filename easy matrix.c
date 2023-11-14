/*输入mn个数，输出 m*n的矩阵*/
/*每一行输入n个数后换行，直到结束*/
#include<stdio.h>
int main()
{
	int m=0,n=0,N[1000],i=1,j=1,k=1;
	printf("你想输出矩阵大小为：");
	scanf("%d*%d",&m,&n);
	for(i=1;i<=m*n;i++)
	scanf("%d",&N[i]);
		while(k<=m*n)
		{
		printf("%d ",N[k]);
		if(k%n==0)
		printf("\n");
		k++;
		}		
} 
