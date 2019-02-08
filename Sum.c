#include <stdio.h>

int main() {
	int N,K,i,sum,count=0;
	scanf("%d%d",&N,&K);
	for(i=1;i<=N;i++)
	{
		sum=0+i;
		printf("%d",sum);
	}
	for(i=1;i<=K;i++)
	{
		count=count+i;
	}
	printf("\n%d",count);
	return 0;
}
