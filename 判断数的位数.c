/*�ж�һ�����Ǽ�λ��*/
/*�򵥣��ó�����ʵ��*/
#include<stdio.h>
int main ()
{
	int number=0;
	int i=0;
	scanf("%d",&number);
	for(i=0;number!=0;i++)
		number=number/10;
	printf("�������%dλ��",i);
	return 0; 
}

 
