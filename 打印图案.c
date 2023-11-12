/*先向列打印，再向横向打*/
/*一行一行打印*/
/*不要一个一个单位进行打印*/ 
#include<stdio.h>
int main()
{
    int l,c;
    int i=1,j=1,k=1,m=1,n=1,h=1;
    scanf("%d%d",&l,&c);
    while(j<=l)
    {
    for(i=1;i<=c;i++)/*打印第一列*/
    printf("|*****");
    printf("|");
    printf("\n");
    for(k=1;k<=c;k++)/*打印第2列*/
    printf("|  |  ");
    printf("|");
    printf("\n");
    for(m=1;m<=c;m++)/*打印第3列*/
    printf("|--+--");
    printf("|");
    printf("\n");
    for(n=1;n<=c;n++)/*打印第2列*/
    printf("|  |  ");
    printf("|");
    printf("\n");
    j++;
    }
    for(h=1;h<=c;h++)/*打印最后列*/
    printf("|*****");
    printf("|");
    return 0;
}
