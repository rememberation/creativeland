#include<stdio.h>
int main()
{
    //char id[20];Ҳ���Է�����/*���ַ���ʽ���棬��ת��Ϊ����*/
    int tid[18]={0};/*û�б�Ҫʹ�ö�ά����*/ 
    int i=0,j=0,k=0,sum=0,t=0,fact=0;
    int xishu[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char yushu[]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {   
        sum=0;
         char id[20];/*continous����������������ַ���һ�������룬���ַ�����*/
        scanf("%s\n",id);/*������ĸ���֮ǰ��*/
        for(k=0;k<17;k++)
        {
            tid[k]=(int)(id[k]-'0');
        }
        for(j=0;j<17;j++)
        {
            sum=sum+tid[j]*xishu[j];
        }
        fact=sum%11;
        if(yushu[fact]==id[17])
            printf("right\n");
        if(yushu[fact]!=id[17])
            printf("wrong\n");
    }
    return 0;
}
/*problem:�ַ��������ַ�����ȣ���������ֱ����������ȣ�����ASCII�벻ͬ*/
/*Ҫ˼��������������*/
