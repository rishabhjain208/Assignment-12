#include<stdio.h>
int printnat(int n)
{
    if(n==0)
    return;
    printf("%d ",n);
    printnat(n-1);
}
int main()
{
    int n=10;
    printnat(n);
    return 0;
}

