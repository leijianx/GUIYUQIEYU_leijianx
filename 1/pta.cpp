#include<stdio.h>
//#include<iostream>      
//#include<cstdio>
//using namespace std; 
int main()
{
	//C++中用来从测试文件中读取大量测试数据语句。
	//freopen("C:\\Users\\Administrator\\Desktop\\test.txt","r",stdin);
	int n,x1,y1,x2,y2,k,count=0,cnt=0;
	scanf("%d\n",&n);
	int m=2*n;
	char a[m+100][m+100];
//	输入盘面 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		
			scanf("%c ",&a[i][j]);
	}
	scanf("%d",&k);
//下面这段测试输入盘面结果的代码，如果位于上一行scanf()前就会出现赋值错位问题，不太懂字符串的输入
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<m;j++)
//			printf("%c ",a[i][j]);
//		printf("\n");	
//	}
//	输入一对位置，在不等于*并且相同时，将这对位置元素替换为*并输出盘面
// 等于*或不同则输出Uh-oh
	while(k--) 
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		if(a[x1-1][y1-1]==a[x2-1][y2-1]&&a[x1-1][y1-1]!='*'&&a[x2-1][y2-1]!='*')
		{
			a[x1-1][y1-1]='*';
			a[x2-1][y2-1]='*';
//判断是否完成
			cnt++;
			 if(cnt==m*m/2)
			 {
			 	printf("Congratulations!\n");
			 	return 0;
			 }		
		
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<m;j++)
				{
					printf("%c",a[i][j]);
					if(j!=m-1)
					printf(" ");	
				}
				printf("\n");	
			}
		}
		else
		{
			printf("Uh-oh\n");
			count++;
		}
		if(count==3)
		{
			printf("Game Over\n");
			return 0;
		}		
	 } 
	 return 0;
}
