/*����mn��������� m*n�ľ���*/
/*ÿһ������n�������У�ֱ������*/
#include<stdio.h>
int main()
{
	int m=0,n=0,N[1000],i=1,j=1,k=1;
	printf("������������СΪ��");
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
