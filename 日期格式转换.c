#include<stdio.h>
int main(){
    int month,year,day;
    scanf("%d-%d-%d",&month,&day,&year);/*按月年日输入*/ 
    printf("%d-%02d-%02d",year,month,day);/*两位形式输出，不足左补零*/ 
    return 0;
}
