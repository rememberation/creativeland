#include<stdio.h>
#include<string.h>
int main()
{
	char love[5],a[11]={"I love you"},b[9]={"tryagain"},c[5]={"look"};
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s",love);
	int d=strcmp(love,c); 
	if(d==0)
	printf("%s",a);
	else
	printf("%s",b); 
	return 0;
} 
