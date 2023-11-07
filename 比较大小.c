#include<stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    t=a;/*要打分号*/
    a=b;
    b=t;
    }
    if(a>c)
    {
    t=a;
    a=c;
    c=t;
    }
    if(b>c)
    {
    t=b;
    b=c;
    c=t;/*顺序：变量-大的值-小的值-变量*/
    }
    printf("%d->%d->%d",a,b,c);
    return 0;
}
