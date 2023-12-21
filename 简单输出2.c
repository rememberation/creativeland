#include<stdio.h>
int main()
{
    int a=0 ,b=0;
    char c='a';
    scanf("%d\n",&a);
    c=getchar();
    scanf("%d",&b);
    printf("%d %d %c\n",a,b,c);
    printf("%d %d %d %d %d\n",a+b,a-b,a*b,a/b,a%b);
    printf("The ratio of %d versus %d is %.2f.\n",a,b,(double)a/b);
    printf("The ratio of %d / %d is %.2f%%.",a,b,(double)a/b*100);
    return 0;
}
