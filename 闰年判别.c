/*闰年的定义：1.能被4整除，但不能被100整除；2.能被四百整除。*/
/*分类：1.能被4整除，不能被100或400整除>闰年 
		2.能被4整除，能被100整除，不能被400整除>非闰年
		3. 能被4整除，能被100整除，能被400整除>闰年
		4.不能被4整除>不是闰年*/
#include<stdio.h>
int main(){
	int year,leap;
	printf("请输入一个年份:"); 
	scanf("%d",&year);
	if(year%4==0)
	  {
	  if(year%100==0)
	  	if(year%400==0)
	  	leap=1;
	  	else
	  	leap=0;
	  else
	  leap=1;
	  }
	else
	leap=0;
	if(leap==1)
	printf("%d年是闰年",year);/*注意中文逗号和英文逗号不一样，非常难看出来*/ 
	if(leap==0) 
	printf("%d年不是闰年",year);
	return 0; 
}
/*这道题告诉我们，相同的语句可以合并，放在最后来写，会省时省力，效果还好*/ 

