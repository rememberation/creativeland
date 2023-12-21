请设计一个函数，参数为一个单词（字符串），假设max是单词中出现次数最多的字母的出现次数，min是单词中出现次数最少的字母的出现次数，如果max-min是一个质数，则返回则max-min，否则返回-1。

注意：判断一个整数是否为质数的函数不需要实现，要求直接调用下边的函数来判断

int        isPrime( int n ) ;
该函数判断一个整数是否是质数，是则返回1，否则返回0。

测试程序输入：

只有一行，是一个单词，其中只可能出现小写字母，并且长度小于100。

测试程序输出：

如果输入单词的max-min是一个质数，输出max-min的值，否则输出-1。

函数接口定义：
int        getResult( char word[] ) ;
其中 word 是用户传入的参数，为待处理单词。函数须按要求返回max-min或-1。

裁判测试程序样例：

#include<stdio.h>

#define        MAXLEN        110

int        isPrime( int n ) ;//判断一个整数是否是质数，是则返回1，否则返回0 
int        getResult( char word[] ) ;

int main()
{
    char    word[MAXLEN] ;

    scanf( "%s" , word ) ;            
    printf( "%d\n" , getResult( word ) );

    return 0;
}

/* 请在这里填写答案 */
int   getResult( char word[] ) 
{
    int len=0,j=0,i=0,count=0,max=0,min=100,zhi[110]={0},leap = 0,t=0;
    len = strlen(word);/*死在min手里*/
    for(j=0;j<len;j++)
    {
        count = 0;
        for(i=0;i<len;i++)
        {
            if(word[j]==word[i])
                count=count+1;
        }
        zhi[j]=count;
    }
    for(i=0;i<len;i++)
    {
        if(max<zhi[i])
            max=zhi[i];
        if(min>zhi[i])
            min=zhi[i];
    }
    leap = max-min ;
    t = isPrime(leap) ;
    if(t==1)
        leap=leap;
    else
        leap=-1;
    return leap;
}
输入样例：
banana

输出样例：
2

