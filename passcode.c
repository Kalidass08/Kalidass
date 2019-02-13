#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a,&b);
    b=a%100;
    c=a/100;
    if(b==c)
    {
        printf("Passcode Matched");
    }
    else
    printf("Mismatched");
    return 0;
}
