#include<stdio.h>
int main()
{
    //char id[20];也可以放在这/*以字符形式储存，再转换为数字*/
    int tid[18]={0};/*没有必要使用二维数组*/ 
    int i=0,j=0,k=0,sum=0,t=0,fact=0;
    int xishu[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char yushu[]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {   
        sum=0;
         char id[20];/*continous输入既有数字又有字符的一次性输入，用字符数组*/
        scanf("%s\n",id);/*新输入的覆盖之前的*/
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
/*problem:字符数组与字符数组比，不能用它直接与整数组比，两者ASCII码不同*/
/*要思考而不是碰到答案*/
