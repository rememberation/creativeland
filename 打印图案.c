/*�����д�ӡ����������*/
/*һ��һ�д�ӡ*/
/*��Ҫһ��һ����λ���д�ӡ*/ 
#include<stdio.h>
int main()
{
    int l,c;
    int i=1,j=1,k=1,m=1,n=1,h=1;
    scanf("%d%d",&l,&c);
    while(j<=l)
    {
    for(i=1;i<=c;i++)/*��ӡ��һ��*/
    printf("|*****");
    printf("|");
    printf("\n");
    for(k=1;k<=c;k++)/*��ӡ��2��*/
    printf("|  |  ");
    printf("|");
    printf("\n");
    for(m=1;m<=c;m++)/*��ӡ��3��*/
    printf("|--+--");
    printf("|");
    printf("\n");
    for(n=1;n<=c;n++)/*��ӡ��2��*/
    printf("|  |  ");
    printf("|");
    printf("\n");
    j++;
    }
    for(h=1;h<=c;h++)/*��ӡ�����*/
    printf("|*****");
    printf("|");
    return 0;
}
