/*����ʾ����������һ��һ��ִ�е�*/ 
#include<stdio.h>
int main()
{
    int l,c;
    int i=1,j=1;
    scanf("%d%d",&l,&c);
    while(j<=l*c)
    {
    printf("|*****\n|  |  \n|--+--\n|  |  ");
    if(j%c==c-1)
    {
    printf("|*****|\n|  |  |\n|--+--|\n|  |  |");
    printf("\n");
    j=j+2;/*ע���ӡ��˳��һ��*/ 
    }
    else
    j++;
    }
    for(i=1;i<=c;i++)/*��ӡ���һ��*/
    printf("|*****");
    printf("|");
    
}
