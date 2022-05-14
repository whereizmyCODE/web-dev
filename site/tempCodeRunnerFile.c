#include<stdio.h>
int main()
{
    int a=20,sum=0;
    while(a=a/2)
    {
        sum=sum+a%2;
    }

    printf("%d",sum);
}