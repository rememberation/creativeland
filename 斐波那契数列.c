/*쳲���������*/
/*a1=1,a2=1,a3=a2+a1*/
/*Ŀ�ģ����λ����֪�������ֵ*/
/*С��Ŀ��λ����һֱ���мӷ�����*/
/*��ǰ��λ�������¸�ֵ */
#include<stdio.h>
int main()
{
	int nf=1,nm=1,nl=0,n=0;
	scanf("%d",&n);
	int i=1;
	if(n<=2)
	printf("1");
	if(n>2)
	{
	for(i=1;i<=n-2;++i)
	{
	nl=nf+nm;/*ʵ���ϣ�������������ֵ*/ 
	nf=nm;/*nf=nf+nm nm=nf+nm*/
	nm=nl;
	}
	printf("%d ",nl);
	}
	return 0;
}

