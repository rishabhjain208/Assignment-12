#include<stdio.h>
int printnat(int n)
{
    if(n==11)
    return;
    printf("%d ",n);
    printnat(n+1);
}
int main()
{
    int n=1;
    printnat(n);
    return 0;
}
