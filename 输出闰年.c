#include<stdio.h>
int main()
{
    int year,leap,valid=0;
    int stop_year,has_valid_year=0;
    scanf("%d",&stop_year);
    valid=2000<stop_year&&stop_year<2101;/*勾八，把2100年看成闰年，避免中式思维，不可写成 2000<stop_year<2100*/
    if(valid==1)/*多个不等式时要千万小心*/
    {
        for(year=2001;year<=stop_year;year++)
        {
            leap=(year%4==0&&year%100!=0)||year%400==0;
            if(leap==1)
            {
			printf("%d\n",year);
            has_valid_year=1;
			}
        }
    	if(has_valid_year==0)
            printf("None");
    }
    if(valid==0)
    printf("Invalid year!");
    return 0;
}

