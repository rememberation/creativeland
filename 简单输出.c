#include<stdio.h>
int main()
{
    int a,b;
    float f;
    int i=0; 
    scanf("%d%f%d",&a,&f,&b);
    printf("%10d%10.1f%10d\n",a,f,b);
    printf("%-+10d%-+10.2f%-+10dHello\n",a,f,b);
    for(i=0;i<35;i++)
        printf("#");
    printf("\n%+10d%+10.2f%+10d\n",a,f,b);
    for(i=0;i<3;i++)
        printf("0123456789");
    return 0;
    
}
