/*���һ�����ĸ�λ����*/
/*����һ����*/
/*Ŀ��Ϊ  ��һλ��
		  �ڶ�λ�� ��ʽ*/
/*�ڻ�ȡ��λ����ʱ��˳��֪��λ��*/
/*15666*/
/*���������ģ*/
#include<stdio.h>
int main()
{
	int number=0,i=0,j=0,k=0,a=0;
	printf("please sent a number��");
	scanf("%d",&number);
	for(i=1;number!=0;i++)
	{
		a=number%10;
		number=number/10;
		printf("��%dλ����:%d\n",i,a);
	}
	return 0;
} 
