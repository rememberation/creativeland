#include<stdio.h>
#include<string.h>
int main()
{
    char input[1009];
    int i=0,k=0,j=0,n=0,find=0,t=0,m=0,h=0,f=0,max=1;
    int len[1500]={0};
    gets(input);/*scanf�в��ܷſո�*/
    n=strlen(input);/*strlen��ѿո����ȥ*/
    for(i=0;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            find=(input[i]==input[j]);
            if(find==1)
            {
                t=0;/*�ؼ�һ��*/
                for(k=i;k<=j;++k)/*�ж�֮���Ԫ���Ƿ�Գ�*/
                {    
                    t=t+(input[k]==input[i+j-k]);
                }   
                 if(t==j-i+1)/*����Գƣ����泤��*/
                 {
                     len[m]=j-i+1;
                     m=m+1;
                     if(max<len[m-1])
                     max=len[m-1];/*����1*/
                 }/*��bug������һ�£���������ֵ����������*/
                /*break���ĸ�ѭ���ͽ����ĸ�ѭ�����ͽ�ԭ��*/
            }
        }
    }
    printf("%d",max);
    return 0;
}
