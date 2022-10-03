#include<stdio.h>
int printnat(int n)
{
    if(n==0)
    return;
    printf("%d ",2*n);
    printnat(n-1);


}
int main()
{
    int n=10;
    printf(" The even first %d natural number in reverse order \n\n",n);
    printnat(n);
    return 0;
}





