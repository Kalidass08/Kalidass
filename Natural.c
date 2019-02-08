#include<stdio.h>
int main()
{
    int i,N,count=0;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        count=count+i;
    }
    printf("%d",count);
    return 0;
}
