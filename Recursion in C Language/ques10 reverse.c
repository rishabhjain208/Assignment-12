#include<stdio.h>
void rev(int n)
{
    int sum=0,r,x;
    if(n)
{
    r=n%10;
    sum=sum*10+r;
     rev(n/10);
}
printf("%d",sum);
}
int main()
{
    rev(123);
    return 0;
}
