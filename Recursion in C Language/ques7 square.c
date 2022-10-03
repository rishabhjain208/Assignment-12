#include<stdio.h>
int printnat(int n)
{
    if(n==0)
    return;
    printnat(n-1);
    printf("%d ",n*n);


}
int main()
{
    int n=10;
    printf(" The Square of first %d natural number\n\n",n);
    printnat(n);
    return 0;
}






