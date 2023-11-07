#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);/*别忘了输入*/
    if(fabs(a-b-c)<1e-6)/*不需要分号,e就代表10，不用而外加*/
    printf("yes");
    else
    printf("no");
}
