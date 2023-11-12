#include<stdio.h>
int main()
{
	int i=1;
	char c=getchar();
	while(c!='\n')//不要被i所束缚 
	{
	i=i+c;
	printf("%c",c);*//注意语句之间的顺序 
	c=getchar();
	}
	return 0;
}

