#include<stdio.h>
int main()
{
	int i=1;
	char c=getchar();
	while(c!='\n')//��Ҫ��i������ 
	{
	i=i+c;
	printf("%c",c);*//ע�����֮���˳�� 
	c=getchar();
	}
	return 0;
}

