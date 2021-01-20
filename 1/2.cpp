#include <stdio.h>

int search(int a[],int n,int x);
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int x=0; 
	int position=0;
	
	scanf("%d",&x);
	
	position=search(a,10,x);
	if(position==-1)
		printf("not found\n");
	else
		printf("is %d\n",position);	 
	
	return 0;
}

int search(int a[],int n,int x)
{
	int left=0;
	int right=n-1;
	int middle=0;
	
	while(left<=right)
	{
		middle=(right+left)/2;
		if(x==a[middle])
			break;
		if(x<a[middle])
			right=middle-1;
		if(x>a[middle])
			left=middle+1;
	}
	if(left<=right )
		return middle;
	else
		return -1;
} 
