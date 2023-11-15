/*求all水仙花数*/
/*水仙花数定义：水仙花数是指一个 3 位数，它的每个数位上的数字的 3次幂之和等于它本身。*/
/*搞出每位的数字，简单的比较，输出 or继续循环*/ 
#include<stdio.h>
int main()
{
	int i=100,a1=0,a10=0,a100=0,sum=0;
	for(i=100;i<=999;i++)
	{
		a1=i%10;
		a10=i/10%10;
		a100=i/100;
		sum=a1*a1*a1+a10*a10*a10+a100*a100*a100;
		if(sum==i)
		printf("%d ",i);
		else
		continue; 
	}
	return 0;
}

