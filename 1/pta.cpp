#include<stdio.h>
//#include<iostream>      
//#include<cstdio>
//using namespace std; 
int main()
{
	//C++�������Ӳ����ļ��ж�ȡ��������������䡣
	//freopen("C:\\Users\\Administrator\\Desktop\\test.txt","r",stdin);
	int n,x1,y1,x2,y2,k,count=0,cnt=0;
	scanf("%d\n",&n);
	int m=2*n;
	char a[m+100][m+100];
//	�������� 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		
			scanf("%c ",&a[i][j]);
	}
	scanf("%d",&k);
//������β��������������Ĵ��룬���λ����һ��scanf()ǰ�ͻ���ָ�ֵ��λ���⣬��̫���ַ���������
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<m;j++)
//			printf("%c ",a[i][j]);
//		printf("\n");	
//	}
//	����һ��λ�ã��ڲ�����*������ͬʱ�������λ��Ԫ���滻Ϊ*���������
// ����*��ͬ�����Uh-oh
	while(k--) 
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		if(a[x1-1][y1-1]==a[x2-1][y2-1]&&a[x1-1][y1-1]!='*'&&a[x2-1][y2-1]!='*')
		{
			a[x1-1][y1-1]='*';
			a[x2-1][y2-1]='*';
//�ж��Ƿ����
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
