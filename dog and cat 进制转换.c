#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,n=0,all=0,sum=0,t=0;
    char c[20];/*char 中为‘a’，而非变量a*/
    scanf("%s",c);
    n=strlen(c);
    if('W'==c[n-1])/*w单位转m单位*/
     {
        if('A'!=c[0])
        {
            for(i=0;i<n-1;i++)
            {
                t=9-c[i]+'B';/*赋值的希望已死，ASCII的使命重现*/
                all=all*10;
                all=all+t;
            }
        sum=(all+23173)/11;
        printf("%dM",sum);
        }
        if('A'==c[0])
        {
            for(i=1;i<n-1;i++)
            {  
                t=9-c[i]+'B';
                all=all*10;
                all=all+t;
            }
        all=-all;
        sum=(all+23173)/11;
        printf("%dM",sum);
        }
    }
    if('M'==c[n-1])/*m单位转w单位*/
    {
        if('A'!=c[0])
        {
            for(i=0;i<n-1;i++)
            {   
                t=9-c[i]+'B';
                all=all*10;
                all=all+t;
            }
        sum=all*11-23173;
        printf("%dW",sum);
        }
        if('A'==c[0])
        {
            for(i=1;i<n-1;i++)
            {  
                t=9-c[i]+'B';
                all=all*10;
                all=all+t;
            }
        all=-all;
        sum=all*11-23173;
        printf("%dW",sum);
        }
    }  /*注意会不会漏掉括号*/
	return 0;
}
