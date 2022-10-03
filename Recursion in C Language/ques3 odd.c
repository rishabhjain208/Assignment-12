#include<stdio.h>
int printnat(int n)
{
    if(n==0)
    return;

    printnat(n-1);
    printf("%d ",2*n-1);
}
int main()
{
    int n=10;
    printnat(n);
    return 0;
}


