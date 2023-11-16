#include<stdio.h>
int main()
{
    int N[1000];/*定义数组*/ 
    int n,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)/*i只在该函数中定义，只是局域变量*/ 
    {
        scanf("%d",&N[i]);/*相继输入N个数*/ 
    }
    for(int i=0;i<n;i++)
    {
        if(N[i]%2==1)
            x++;
    }
    printf("%d %d",x,n-x);/*判断奇偶的个数*/
    return 0;
}
