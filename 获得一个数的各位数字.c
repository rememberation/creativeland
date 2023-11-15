/*获得一个数的各位数字*/
/*输入一个数*/
/*目的为  第一位是
		  第二位是 形式*/
/*在获取各位数字时，顺便知道位数*/
/*15666*/
/*用求余和求模*/
#include<stdio.h>
int main()
{
	int number=0,i=0,j=0,k=0,a=0;
	printf("please sent a number：");
	scanf("%d",&number);
	for(i=1;number!=0;i++)
	{
		a=number%10;
		number=number/10;
		printf("第%d位数是:%d\n",i,a);
	}
	return 0;
} 
