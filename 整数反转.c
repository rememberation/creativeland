/*������ת�õ����ǳ���������*/
#include<stdio.h>
int main()
{
	int number,F_number=0,n=0;/*ȡ���һλ ����ģ*/ 
	scanf("%d",&number);
	while(number!=0)
	{
	 n=number%10;
	 F_number=F_number*10+n;
	 number=number/10;
	}
	printf("%d",F_number);
}
 
