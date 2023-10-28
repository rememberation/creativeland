#include<stdio.h>
int main(){
int a;float b,c;char d;
    scanf("%f %d %c %f",&b,&a,&d,&c);/*似乎在有多种类型时，要打空格*/ 
    printf("%c %d %.2f %.2f",d,a,b,c);
    return 0;
}
