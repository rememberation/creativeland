#include<stdio.h>
#include<string.h>
int main()
{
    int n[3]={0};
    char move[100];
    int len=0,i=0,truee=0,ps=0;
    scanf("%d %d",&n[1],&n[2]);
    scanf("%s",move);
    len=strlen(move);
    printf("%d",3*n[1]+n[2]+1);
    for(i=0;i<len;i++)
    {
        truee=move[i]-'0';
        switch(truee)/*注意行和列，有时成功只在一念之间*/
        {
            case 1 : {n[2]=n[2]-1;n[1]=n[1]+1;};break;
            case 2 : {n[2]=n[2];n[1]=n[1]+1;};break;
            case 3 : {n[2]=n[2]+1;n[1]=n[1]+1;};break;
            case 4 : {n[2]=n[2]-1;n[1]=n[1];};break;
            case 6 : {n[2]=n[2]+1;n[1]=n[1];};break;
            case 7 : {n[2]=n[2]-1;n[1]=n[1]-1;};break;
            case 8 : {n[2]=n[2];n[1]=n[1]-1;};break;
            case 9 : {n[2]=n[2]+1;n[1]=n[1]-1;};break;
            default:printf("invalid");
        }
        ps=n[1]*3+n[2]+1;
        printf("%d",ps);
    }
    return 0;
}
