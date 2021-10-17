#include <stdio.h> 
int main() 
{ 
 int a[1001],n,i,t; 
 for(i=1;i<=1000;i++) 
 a[i]=0; //初始化 默认每本书数量为空 
 
 scanf("%d",&n); //读入n 
 for(i=1;i<=n;i++) //循环读入n个图书的ISBN号
 { 
 scanf("%d",&t); //把每一个ISBN号读到变量t中
 a[t]=1; //标记出现过的ISBN号 给已经登记过的书号 做成已经登记的记号 
 } 
 
 for(i=1;i<=1000;i++) //依次判断1~1000这个1000个桶 原代码用的1000 
 { 
 if(a[i]==1)//如果这个ISBN号出现过则打印出来
 printf("%d ",i);  
 } 
 getchar();getchar();
 return 0; 
}
