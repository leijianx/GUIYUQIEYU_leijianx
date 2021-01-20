#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,sum=0;
	int *p=NULL;
	
	printf("input n:\n");
	scanf("%d",&n);
	
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("calloc failed\n");
		exit (1);
	}
	
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&p[i]);
		sum+=p[i];
	}
	
	printf("sum=%d\n",sum);
	
	return 0;
}
