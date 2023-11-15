/*判断一个数是几位数*/
/*简单，用除法就实现*/
#include<stdio.h>
int main ()
{
	int number=0;
	int i=0;
	scanf("%d",&number);
	for(i=0;number!=0;i++)
		number=number/10;
	printf("这个数是%d位数",i);
	return 0; 
}

 
