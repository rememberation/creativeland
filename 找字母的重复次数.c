#include<stdio.h>
#include<string.h>/*用好ASCII码*/ 
int main()
{
    char c[200];
    int i=1,n=0,j=1,number=0;
    gets(c);
    n=strlen(c);
    for(i=65;i<=90;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==(int)c[j])/*使用类型强制转换，判断是否相同*/
                number=number+1;
        }
        if(number!=0)
            printf("The character %c has presented %d times.\n",i,number);
        number=0;
    }
     for(i=97;i<=122;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==(int)c[j])/*使用类型强制转换，判断是否相同*/
                number=number+1;
        }
        if(number!=0)
            printf("The character %c has presented %d times.\n",i,number);
         number=0;
     }
    return 0;
}
