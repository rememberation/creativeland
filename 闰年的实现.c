/*闰年语句的快速实行*/
 #include<stdio.h> 
 int main()
	{
 		int year,leap;
 		scanf("%d",&year);
 		leap=(year%4==0&&year%100!=0)||year%400==0;
 		if(leap==1)
 		printf("This is a leap year");
 		else
 		printf("this is not a leap year");
 		return 0;
	} 
