/*斐波那契数列*/
/*a1=1,a2=1,a3=a2+a1*/
/*目的，输出位数，知道该项的值*/
/*小于目的位数，一直进行加法操作*/
/*对前两位进行重新赋值 */
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
	nl=nf+nm;/*实际上，还可以这样赋值*/ 
	nf=nm;/*nf=nf+nm nm=nf+nm*/
	nm=nl;
	}
	printf("%d ",nl);
	}
	return 0;
}

