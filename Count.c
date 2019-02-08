#include <stdio.h>

int main()
{
    long long num;
    int count = 0;
    scanf("%lld", &num);
    while(num != 0)
    {
        count++;
        num =num / 10;
    }

    printf("%d", count);

    return 0;
}
