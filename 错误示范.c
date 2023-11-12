/*错误示范，程序是一列一列执行的*/ 
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
    j=j+2;/*注意打印后顺序不一样*/ 
    }
    else
    j++;
    }
    for(i=1;i<=c;i++)/*打印最后一列*/
    printf("|*****");
    printf("|");
    
}
