#include<stdio.h>
int main()
{
    int N[1000];/*��������*/ 
    int n,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)/*iֻ�ڸú����ж��壬ֻ�Ǿ������*/ 
    {
        scanf("%d",&N[i]);/*�������N����*/ 
    }
    for(int i=0;i<n;i++)
    {
        if(N[i]%2==1)
            x++;
    }
    printf("%d %d",x,n-x);
    return 0;
}
