#include<stdio.h>
#include<string.h>
int main()
{
    char input[1009];
    int i=0,k=0,j=0,n=0,find=0,t=0,m=0,h=0,f=0,max=1;
    int len[1500]={0};
    gets(input);/*scanf中不能放空格*/
    n=strlen(input);/*strlen会把空格算进去*/
    for(i=0;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            find=(input[i]==input[j]);
            if(find==1)
            {
                t=0;/*关键一步*/
                for(k=i;k<=j;++k)/*判断之间的元素是否对称*/
                {    
                    t=t+(input[k]==input[i+j-k]);
                }   
                 if(t==j-i+1)/*如果对称，储存长度*/
                 {
                     len[m]=j-i+1;
                     m=m+1;
                     if(max<len[m-1])
                     max=len[m-1];/*少了1*/
                 }/*改bug就运行一下，找找特殊值，代入算算*/
                /*break在哪个循环就结束哪个循环，就近原则*/
            }
        }
    }
    printf("%d",max);
    return 0;
}
