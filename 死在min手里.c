�����һ������������Ϊһ�����ʣ��ַ�����������max�ǵ����г��ִ���������ĸ�ĳ��ִ�����min�ǵ����г��ִ������ٵ���ĸ�ĳ��ִ��������max-min��һ���������򷵻���max-min�����򷵻�-1��

ע�⣺�ж�һ�������Ƿ�Ϊ�����ĺ�������Ҫʵ�֣�Ҫ��ֱ�ӵ����±ߵĺ������ж�

int        isPrime( int n ) ;
�ú����ж�һ�������Ƿ������������򷵻�1�����򷵻�0��

���Գ������룺

ֻ��һ�У���һ�����ʣ�����ֻ���ܳ���Сд��ĸ�����ҳ���С��100��

���Գ��������

������뵥�ʵ�max-min��һ�����������max-min��ֵ���������-1��

�����ӿڶ��壺
int        getResult( char word[] ) ;
���� word ���û�����Ĳ�����Ϊ�������ʡ������밴Ҫ�󷵻�max-min��-1��

���в��Գ���������

#include<stdio.h>

#define        MAXLEN        110

int        isPrime( int n ) ;//�ж�һ�������Ƿ������������򷵻�1�����򷵻�0 
int        getResult( char word[] ) ;

int main()
{
    char    word[MAXLEN] ;

    scanf( "%s" , word ) ;            
    printf( "%d\n" , getResult( word ) );

    return 0;
}

/* ����������д�� */
int   getResult( char word[] ) 
{
    int len=0,j=0,i=0,count=0,max=0,min=100,zhi[110]={0},leap = 0,t=0;
    len = strlen(word);/*����min����*/
    for(j=0;j<len;j++)
    {
        count = 0;
        for(i=0;i<len;i++)
        {
            if(word[j]==word[i])
                count=count+1;
        }
        zhi[j]=count;
    }
    for(i=0;i<len;i++)
    {
        if(max<zhi[i])
            max=zhi[i];
        if(min>zhi[i])
            min=zhi[i];
    }
    leap = max-min ;
    t = isPrime(leap) ;
    if(t==1)
        leap=leap;
    else
        leap=-1;
    return leap;
}
����������
banana

���������
2

