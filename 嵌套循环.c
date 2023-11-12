#include<stdio.h>
int main()
{
    int group_n,N[10000];/*过不去的时候，不放调大一点*/ 
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
        while(N[j-1]!=-1);/*do...while中while后面有;*/ 
        printf("%d\n",sum);
        i++;
    }
    return 0;
}
