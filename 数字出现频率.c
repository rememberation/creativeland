#include<stdio.h>
#include<string.h>
int main()
{
    char N[1000];
    int len=0;
    int i=0,j=0;
    scanf("%s",N);/*strlen不能求数组长度*/
    len=strlen(N);
    for(i=0;i<10;i++)
    {    
        int count=0;
        for(j=0;j<len;j++)
        {
            if(i==N[j]-'0')/*记住1！=‘1’*/
            {
                count=count+1;
            }
        }
            if(count!=0)
            printf("%d:%d\n",i,count);
    }
    return 0;
}
