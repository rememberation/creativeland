#include<stdio.h>
int main()
{
    int test_number,a,b,c;
    int all_test_time=0;
    int i=1;
    scanf("%d",&test_number);
    while(i<=test_number)
    {
        scanf("%d%d%d",&a,&b,&c);//��Ҫ����������
        i++;
        if(a==0)
        continue;
        if(a!=0)
        all_test_time=all_test_time+b+(c-1)*20;//�����Ϳ���ʵ���ۼ�
    }
    printf("%d",all_test_number);
    return 0;
}
