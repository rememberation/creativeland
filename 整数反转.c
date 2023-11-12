/*整数反转用到的是除法的性质*/
#include<stdio.h>
int main()
{
	int number,F_number=0,n=0;/*取最后一位 用求模*/ 
	scanf("%d",&number);
	while(number!=0)
	{
	 n=number%10;
	 F_number=F_number*10+n;
	 number=number/10;
	}
	printf("%d",F_number);
}
 
