
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%2==0)
{
    printf("Even");
}
else if (a%2==1)
{
    printf("Odd");
}
else
printf("invalid");
return 0;
}
