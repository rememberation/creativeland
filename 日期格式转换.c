#include<stdio.h>
int main(){
    int month,year,day;
    scanf("%d-%d-%d",&month,&day,&year);/*������������*/ 
    printf("%d-%02d-%02d",year,month,day);/*��λ��ʽ�������������*/ 
    return 0;
}
