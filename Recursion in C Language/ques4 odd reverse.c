#include<stdio.h>
int printnat(int n)
{
    if(n==0)
    return;
    printf("%d ",2*n-1);
    printnat(n-1);

}
int main()
{
    int n=10;
    printf("odd first %d natural number \n\n",n);
    printnat(n);
    return 0;
}



