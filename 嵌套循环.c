#include<stdio.h>
int main()
{
    int group_n,N[10000];/*����ȥ��ʱ�򣬲��ŵ���һ��*/ 
    int i=1,j=1,sum=0;
    scanf("%d",&group_n);
    while(i<=group_n) 
    {
        int sum = 0;  /*Reset sum for each test case*/
        j = 1;  /*Reset array index for each test case*/
        do
        {
        scanf("%d",&N[j]);
        if(N[j]%3==1&&N[j]%5==2)
        sum=sum+N[j];
        else
        sum=sum;
        j++;
        }
        while(N[j-1]!=-1);/*do...while��while������;*/ 
        printf("%d\n",sum);
        i++;
    }
    return 0;
}
