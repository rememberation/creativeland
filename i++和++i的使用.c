关于i++和++i 的辨析
eg./*
a=i++意思将i赋值给a,再i=i+1
a=++i意思是i=i+1 a=i*/废话


i++先自增，返回自增前的值
++i先自增，返回自增后的值 
(之后出现，用自增的值) 
上题
int i=0;
i=i++  
i=?
0



int a=2;
int b=a+(3*a++) 
b=?
8

int a=2;
int b=(3*a++)+a; 
b=?
9


int i=1;
int j=1;
int k=i++ + ++i + ++j + j++
k=?
8
