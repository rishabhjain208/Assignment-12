#include<stdio.h>
void printnat(int n)
{
    if(n==0)
    return;
    else
        printnat(n/2);
     printf(" %d ",n%2);



}
int main()
{
    int n=10;
    printf("Binary number  ");
    printnat(n);
    return 0;
}







