#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);/*����������*/
    if(fabs(a-b-c)<1e-6)/*����Ҫ�ֺ�,e�ʹ���10�����ö����*/
    printf("yes");
    else
    printf("no");
}
